#ifndef BEHAVIORS_H_
#define BEHAVIORS_H_

#include "biodynamo.h"
#include "my_cell.h"
#include "parameters.h"

namespace bdm {
namespace my_tumor {

// Aging behavior - simulates the aging process of cells
struct AgingBehavior : public Behavior {
  BDM_BEHAVIOR_HEADER(AgingBehavior, Behavior, 1);

  AgingBehavior() { AlwaysCopyToNew(); }
  virtual ~AgingBehavior() {}

  void Run(Agent* agent) override {
    auto* cell = dynamic_cast<MyCell*>(agent);
    if (!cell) return;

    // Only increase age, don't remove cells
    cell->IncreaseAge(1.0);
  }
};

// Apoptosis behavior - controls probabilistic cell death
struct ApoptosisBehavior : public Behavior {
  BDM_BEHAVIOR_HEADER(ApoptosisBehavior, Behavior, 1);

  ApoptosisBehavior() { AlwaysCopyToNew(); }
  virtual ~ApoptosisBehavior() {}

  void Run(Agent* agent) override {
    auto* cell = dynamic_cast<MyCell*>(agent);
    if (!cell) return;
    
    auto* random = Simulation::GetActive()->GetRandom();
    double age = cell->GetAge();
    double lifespan = cell->GetLifespan();
    
    // If lifespan is zero or negative, don't apply apoptosis
    if (lifespan <= 0) return;
    
    // Calculate apoptosis probability based on age relative to lifespan
    // The closer to lifespan, the higher the probability
    double relative_age = age / lifespan;
    double base_prob = 0.0;
    
    if (relative_age < 0.8) {
      // Low probability for young cells (< 80% of lifespan)
      base_prob = 0.01;
    } else if (relative_age >= 0.8 && relative_age < 1.0) {
      // Increasing probability as cells approach lifespan
      base_prob = 0.05 + 0.2 * (relative_age - 0.8) / 0.2;
    } else {
      // High probability for cells at or beyond lifespan
      base_prob = 0.25 + 0.5 * (relative_age - 1.0);
      // Cap the probability to 0.95 to avoid deterministic removal
      if (base_prob > 0.95) base_prob = 0.95;
    }
    
    // Apply the probabilistic test for apoptosis
    if (random->Uniform(0, 1) < base_prob) {
      cell->RemoveFromSimulation();
    }
  }
};

// Growth behavior - controls cell growth rate
struct GrowthBehavior : public Behavior {
  BDM_BEHAVIOR_HEADER(GrowthBehavior, Behavior, 1);

  GrowthBehavior() { AlwaysCopyToNew(); }
  virtual ~GrowthBehavior() {}

  void Run(Agent* agent) override {
    auto* cell = dynamic_cast<MyCell*>(agent);
    if (!cell) return;

    double growth_rate = 0.0;
    double max_diameter = 0.0;

    // Determine growth rate based on cell type
    switch (cell->GetCellType()) {
      case CellType::Tumor:
        growth_rate = ModelParameters::kTumorGrowthRate;
        max_diameter = ModelParameters::kTumorMaxDiameter;
        break;
      case CellType::HealthyEpithelial:
        growth_rate = ModelParameters::kHealthyGrowthRate;
        max_diameter = ModelParameters::kHealthyMaxDiameter;
        break;
      case CellType::Fibroblast:
        growth_rate = ModelParameters::kFibroblastGrowthRate;
        max_diameter = ModelParameters::kFibroblastMaxDiameter;
        break;
      case CellType::Immune:
        growth_rate = ModelParameters::kImmuneGrowthRate;
        max_diameter = ModelParameters::kImmuneMaxDiameter;
        break;
      case CellType::Endothelial:
        growth_rate = ModelParameters::kEndothelialGrowthRate;
        max_diameter = ModelParameters::kEndothelialMaxDiameter;
        break;
      default:
        break;
    }

    // Apply growth if cell hasn't reached maximum size
    if (max_diameter > 0 && cell->GetDiameter() < max_diameter) {
      cell->ChangeVolume(growth_rate);
    }
  }
};

// Division behavior - controls cell division
struct DivisionBehavior : public Behavior {
  BDM_BEHAVIOR_HEADER(DivisionBehavior, Behavior, 1);

  DivisionBehavior() { AlwaysCopyToNew(); }
  virtual ~DivisionBehavior() {}

  void Run(Agent* agent) override {
    auto* cell = dynamic_cast<MyCell*>(agent);
    if (!cell) return;

    auto* random = Simulation::GetActive()->GetRandom();

    double division_prob = 0.0;
    double max_diameter = 0.0;

    // Determine division probability and max diameter based on cell type
    switch (cell->GetCellType()) {
      case CellType::Tumor:
        division_prob = ModelParameters::kTumorDivisionProb;
        max_diameter = ModelParameters::kTumorMaxDiameter;
        break;
      case CellType::HealthyEpithelial:
        division_prob = ModelParameters::kHealthyDivisionProb;
        max_diameter = ModelParameters::kHealthyMaxDiameter;
        break;
      case CellType::Fibroblast:
        division_prob = ModelParameters::kFibroblastDivisionProb;
        max_diameter = ModelParameters::kFibroblastMaxDiameter;
        break;
      case CellType::Immune:
        division_prob = ModelParameters::kImmuneDivisionProb;
        max_diameter = ModelParameters::kImmuneMaxDiameter;
        break;
      case CellType::Endothelial:
        division_prob = ModelParameters::kEndothelialDivisionProb;
        max_diameter = ModelParameters::kEndothelialMaxDiameter;
        break;
      default:
        break;
    }

    // ✅ Minimal fix: require diameter >= max before dividing
    if (cell->GetDiameter() >= max_diameter &&
        division_prob > 0 &&
        random->Uniform(0, 1) < division_prob) {
      cell->Divide();
    }
  }
};

// Brownian motion behavior - random movement of cells
struct BrownianMotionBehavior : public Behavior {
  BDM_BEHAVIOR_HEADER(BrownianMotionBehavior, Behavior, 1);

  BrownianMotionBehavior() { AlwaysCopyToNew(); }
  virtual ~BrownianMotionBehavior() {}

  void Run(Agent* agent) override {
    auto* cell = dynamic_cast<MyCell*>(agent);
    if (!cell) return;

    auto* random = Simulation::GetActive()->GetRandom();
    double diffusion_coeff = 0.0;

    // Determine diffusion coefficient based on cell type
    switch (cell->GetCellType()) {
      case CellType::Tumor:
        diffusion_coeff = ModelParameters::kTumorDiffusion;
        break;
      case CellType::HealthyEpithelial:
        diffusion_coeff = ModelParameters::kHealthyDiffusion;
        break;
      case CellType::Fibroblast:
        diffusion_coeff = ModelParameters::kFibroblastDiffusion;
        break;
      case CellType::Immune:
        diffusion_coeff = ModelParameters::kImmuneDiffusion;
        break;
      case CellType::Endothelial:
        diffusion_coeff = ModelParameters::kEndothelialDiffusion;
        break;
      default:
        break;
    }

    // Apply random displacement if diffusion coefficient is positive
    if (diffusion_coeff > 0) {
      Real3 displacement = random->template UniformArray<3>(-diffusion_coeff, diffusion_coeff);
      cell->UpdatePosition(displacement);
    }
  }
};

// Adhesion behavior - cell-cell adhesion
struct AdhesionBehavior : public Behavior {
  BDM_BEHAVIOR_HEADER(AdhesionBehavior, Behavior, 1);

  AdhesionBehavior() { AlwaysCopyToNew(); }
  virtual ~AdhesionBehavior() {}

  void Run(Agent* agent) override {
    auto* cell = dynamic_cast<MyCell*>(agent);
    if (!cell) return;

    // Get cell's position
    Real3 cell_pos = cell->GetPosition();
    double adhesion_strength = 0.0;

    // Determine adhesion strength based on cell type
    switch (cell->GetCellType()) {
      case CellType::Tumor:
        adhesion_strength = ModelParameters::kTumorAdhesion;
        break;
      case CellType::HealthyEpithelial:
        adhesion_strength = ModelParameters::kHealthyAdhesion;
        break;
      case CellType::Fibroblast:
        adhesion_strength = ModelParameters::kFibroblastAdhesion;
        break;
      case CellType::Immune:
        adhesion_strength = ModelParameters::kImmuneAdhesion;
        break;
      case CellType::Endothelial:
        adhesion_strength = ModelParameters::kEndothelialAdhesion;
        break;
      default:
        break;
    }

    // Skip if no adhesion
    if (adhesion_strength <= 0) {
      return;
    }

    // Find neighboring cells within adhesion radius
    real_t adhesion_radius = ModelParameters::kAdhesionRadius;
    Real3 adhesion_force{0, 0, 0};
    int neighbor_count = 0;

    auto* sim = Simulation::GetActive();
    auto* rm = sim->GetResourceManager();

    rm->ForEachAgent([&](Agent* neighbor) {
      if (neighbor == cell) return;

      Real3 pos_diff = cell_pos - neighbor->GetPosition();
      real_t distance = pos_diff.Norm();

      if (distance > 0 && distance <= adhesion_radius) {
        Real3 direction = pos_diff * (1.0 / distance);
        real_t force_magnitude = adhesion_strength * (1.0 - distance / adhesion_radius);
        adhesion_force -= direction * force_magnitude;
        neighbor_count++;
      }
    });

    if (neighbor_count > 0) {
      cell->UpdatePosition(adhesion_force);
    }
  }
};

// Repulsion behavior - cell-cell repulsion
struct RepulsionBehavior : public Behavior {
  BDM_BEHAVIOR_HEADER(RepulsionBehavior, Behavior, 1);

  RepulsionBehavior() { AlwaysCopyToNew(); }
  virtual ~RepulsionBehavior() {}

  void Run(Agent* agent) override {
    auto* cell = dynamic_cast<MyCell*>(agent);
    if (!cell) return;

    Real3 cell_pos = cell->GetPosition();
    double repulsion_strength = 0.0;

    switch (cell->GetCellType()) {
      case CellType::Tumor:
        repulsion_strength = ModelParameters::kTumorRepulsion;
        break;
      case CellType::HealthyEpithelial:
        repulsion_strength = ModelParameters::kHealthyRepulsion;
        break;
      case CellType::Fibroblast:
        repulsion_strength = ModelParameters::kFibroblastRepulsion;
        break;
      case CellType::Immune:
        repulsion_strength = ModelParameters::kImmuneRepulsion;
        break;
      case CellType::Endothelial:
        repulsion_strength = ModelParameters::kEndothelialRepulsion;
        break;
      default:
        break;
    }

    if (repulsion_strength <= 0) return;

    real_t repulsion_radius = ModelParameters::kRepulsionRadius;
    Real3 repulsion_force{0, 0, 0};
    int neighbor_count = 0;

    auto* sim = Simulation::GetActive();
    auto* rm = sim->GetResourceManager();

    rm->ForEachAgent([&](Agent* neighbor) {
      if (neighbor == cell) return;

      Real3 pos_diff = cell_pos - neighbor->GetPosition();
      real_t distance = pos_diff.Norm();

      if (distance > 0 && distance <= repulsion_radius) {
        Real3 direction = pos_diff * (1.0 / distance);
        real_t force_magnitude = repulsion_strength * (1.0 - distance / repulsion_radius);
        repulsion_force += direction * force_magnitude;
        neighbor_count++;
      }
    });

    if (neighbor_count > 0) {
      cell->UpdatePosition(repulsion_force);
    }
  }
};

}  // namespace my_tumor
}  // namespace bdm

#endif  // BEHAVIORS_H_
