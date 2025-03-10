#ifndef BEHAVIORS_H_
#define BEHAVIORS_H_

#include "biodynamo.h"
#include "my_cell.h"
#include "my_diffusion_grid.h" 

namespace bdm {
namespace my_tumor {

struct Growth : public Behavior {
  BDM_BEHAVIOR_HEADER(Growth, Behavior, 1);

  Growth() { AlwaysCopyToNew(); }
  virtual ~Growth() {}

  void Run(Agent* agent) override {
    auto* cell = dynamic_cast<MyCell*>(agent);
    if (!cell) return;

    auto* random = Simulation::GetActive()->GetRandom();
    if (cell->GetDiameter() < 8) {
      double growth_rate = (cell->GetCellType() == CellType::Tumor) ? 500 : 300;
      cell->ChangeVolume(growth_rate);
    } else {
      double division_prob = (cell->GetCellType() == CellType::Tumor) ? 0.8 : 0.4;
      if (random->Uniform(0, 1) < division_prob) {
        cell->Divide();
      }
    }
  }
};

struct TumorBrownianMotion : public Behavior {
  BDM_BEHAVIOR_HEADER(TumorBrownianMotion, Behavior, 1);

  // Default constructor with default diffusion coefficients.
  TumorBrownianMotion() : TumorBrownianMotion(0.75, 0.45) {}

  TumorBrownianMotion(double tumor_diff, double healthy_diff)
      : tumor_diffusion_(tumor_diff), healthy_diffusion_(healthy_diff) {
    AlwaysCopyToNew();
  }
  virtual ~TumorBrownianMotion() {}

  void Run(Agent* agent) override {
    auto* cell = dynamic_cast<MyCell*>(agent);
    if (!cell) return;

    auto* random = Simulation::GetActive()->GetRandom();
    double coeff = (cell->GetCellType() == CellType::Tumor) ? tumor_diffusion_ : healthy_diffusion_;
    Real3 displacement = random->template UniformArray<3>(-coeff, coeff);
    cell->UpdatePosition(displacement);
  }

 private:
  double tumor_diffusion_;
  double healthy_diffusion_;
};

struct SecretionBehavior : public Behavior {
  BDM_BEHAVIOR_HEADER(SecretionBehavior, Behavior, 1);

  SecretionBehavior() { AlwaysCopyToNew(); }
  virtual ~SecretionBehavior() {}

  void Run(Agent* agent) override {
    auto* cell = dynamic_cast<MyCell*>(agent);
    if (!cell) return;

    Real3 pos = cell->GetPosition();

    switch (cell->GetCellType()) {
      case CellType::Tumor:
        // Increase TGF-beta concentration for tumor cells.
        IncreaseConcentrationAt("TGF-beta", pos, 0.1);
        break;
      case CellType::Fibroblast: {
        real_t local_tgf = GetConcentrationAt("TGF-beta", pos);
        if (local_tgf > 0.5) {
          IncreaseConcentrationAt("MMPs", pos, 0.05);
        }
        break;
      }
      default:
        break;
    }
  }
};

struct ResponseBehavior : public Behavior {
  BDM_BEHAVIOR_HEADER(ResponseBehavior, Behavior, 1);

  ResponseBehavior() { AlwaysCopyToNew(); }
  virtual ~ResponseBehavior() {}

  void Run(Agent* agent) override {
    auto* cell = dynamic_cast<MyCell*>(agent);
    if (!cell) return;

    Real3 pos = cell->GetPosition();
    real_t local_tgf = GetConcentrationAt("TGF-beta", pos);

    if (cell->GetCellType() == CellType::HealthyEpithelial && local_tgf > 1.0) {
      // Example: Trigger epithelial-to-mesenchymal transition (EMT).
      cell->SetCellType(CellType::Tumor);
    }
  }
};

// New behavior for cell-cell interactions
struct CellInteractionBehavior : public Behavior {
  BDM_BEHAVIOR_HEADER(CellInteractionBehavior, Behavior, 1);

  CellInteractionBehavior() { AlwaysCopyToNew(); }
  virtual ~CellInteractionBehavior() {}

  void Run(Agent* agent) override {
    auto* cell = dynamic_cast<MyCell*>(agent);
    if (!cell) return;

    auto* sim = Simulation::GetActive();
    auto* random = sim->GetRandom();
    
    // Manual neighborhood lookup
    std::vector<Agent*> neighbors;
    real_t radius = 10.0; // Interaction radius
    
    // Use the ForEachAgent method instead
    auto* rm = sim->GetResourceManager();
    rm->ForEachAgent([&](Agent* neighbor) {
      if (neighbor == cell) return; // Skip self
      
      // Calculate distance
      Real3 pos_diff = cell->GetPosition() - neighbor->GetPosition();
      if (pos_diff.Norm() <= radius) {
        neighbors.push_back(neighbor);
      }
    });
    
    int fibroblast_count = 0;
    int tumor_count = 0;
    int immune_count = 0;
    
    // Count different cell types in neighborhood
    for (auto* neighbor : neighbors) {
      if (auto* other_cell = dynamic_cast<MyCell*>(neighbor)) {
        switch (other_cell->GetCellType()) {
          case CellType::Fibroblast:
            fibroblast_count++;
            break;
          case CellType::Tumor:
            tumor_count++;
            break;
          case CellType::Immune:
            immune_count++;
            break;
          default:
            break;
        }
      }
    }
    
    // Cell behaviors based on neighborhood composition
    switch (cell->GetCellType()) {
      case CellType::HealthyEpithelial:
        // Epithelial cells have contact inhibition - reduce growth in crowded areas
        if (neighbors.size() > 5) {
          cell->SetDiameter(std::min(cell->GetDiameter(), 7.0));
        }
        
        // Higher chance to transform to tumor if surrounded by tumor cells
        if (tumor_count > 2 && random->Uniform(0, 1) < 0.05) {
          cell->SetCellType(CellType::Tumor);
        }
        break;
        
      case CellType::Tumor:
        // Tumor cells grow faster in presence of fibroblasts (CAF effect)
        if (fibroblast_count > 1) {
          cell->ChangeVolume(100); // Additional growth boost
        }
        
        // Tumor cells might be killed by immune cells
        if (immune_count > 2 && random->Uniform(0, 1) < 0.1) {
          cell->RemoveFromSimulation();
        }
        break;
        
      case CellType::Fibroblast:
        // Fibroblasts might transform to cancer-associated fibroblasts (CAFs) near tumor cells
        if (tumor_count > 1 && random->Uniform(0, 1) < 0.1) {
          // This would be a new cell type; for now, we can just mark it with a different color
          cell->SetCellColor(6); // Special color for CAFs
        }
        break;
        
      default:
        break;
    }
  }
};

}  // namespace my_tumor
}  // namespace bdm

#endif  // BEHAVIORS_H_