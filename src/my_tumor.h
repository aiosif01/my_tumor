#ifndef MY_TUMOR_H_
#define MY_TUMOR_H_

#include "biodynamo.h"
#include "my_cell.h"
#include "behaviors.h"
#include "substances.h"

namespace bdm {
namespace my_tumor {



inline int Simulate(int argc, const char** argv) {
  auto set_param = [](Param* param) {
    param->bound_space = Param::BoundSpaceMode::kClosed;
    param->min_bound = 0;
    param->max_bound = 100;
  };

  Simulation simulation(argc, argv, set_param);
  auto* ctxt = simulation.GetExecutionContext();
  auto* param = simulation.GetParam();
  auto* myrand = simulation.GetRandom();

  // Define substances
  DefineSubstances(&simulation);

  // Brownian motion parameters
  double tumor_diff = 0.0;
  double healthy_diff = 0.0;

  // Create cells with layered types - use fewer cells initially for testing
  size_t total_cells = 0;  // Reduced from 100
  for (size_t i = 0; i < total_cells; ++i) {
    // Keep cells away from boundaries to avoid diffusion grid issues
    Real3 pos = {myrand->Uniform(5, 95), myrand->Uniform(5, 95), myrand->Uniform(5, 95)};
    MyCell* cell = new MyCell(pos);
    cell->SetDiameter(5);

    // Assign cell type based on y-coordinate (layers)
    real_t y = pos[1];
    if (y < 30) {
      cell->SetCellType(CellType::Fibroblast);
    } else if (y < 60) {
      cell->SetCellType(CellType::HealthyEpithelial);
    } else {
      cell->SetCellType(CellType::Endothelial);
    }

    // Add behaviors to all cells
    cell->AddBehavior(new Growth());
    cell->AddBehavior(new TumorBrownianMotion(tumor_diff, healthy_diff));
    cell->AddBehavior(new SecretionBehavior());
    cell->AddBehavior(new ResponseBehavior());
    cell->AddBehavior(new CellInteractionBehavior());
    ctxt->AddAgent(cell);
  }

  // Add some immune cells randomly - keep away from boundaries
  size_t immune_cells = 0;  // Reduced from 10
  for (size_t i = 0; i < immune_cells; ++i) {
    Real3 pos = {myrand->Uniform(10, 90), myrand->Uniform(10, 90), myrand->Uniform(10, 90)};
    MyCell* immune = new MyCell(pos);
    immune->SetDiameter(4.5); // Immune cells are smaller
    immune->SetCellType(CellType::Immune);
    immune->AddBehavior(new TumorBrownianMotion(0.8, 0.8)); // Slightly faster than 1.0
    immune->AddBehavior(new CellInteractionBehavior());
    ctxt->AddAgent(immune);
  }

  // Add tumor cells near center - well away from boundaries
  size_t tumor_cells = 3;
  for (size_t i = 0; i < tumor_cells; ++i) {
    Real3 pos = {myrand->Uniform(45, 55), myrand->Uniform(45, 55), myrand->Uniform(45, 55)};
    MyCell* tumor = new MyCell(pos);
    tumor->SetDiameter(6.5);
    tumor->SetCellType(CellType::Tumor);
    tumor->AddBehavior(new Growth());
    tumor->AddBehavior(new TumorBrownianMotion(tumor_diff, healthy_diff));
    tumor->AddBehavior(new SecretionBehavior());
    tumor->AddBehavior(new ResponseBehavior());
    tumor->AddBehavior(new CellInteractionBehavior());
    ctxt->AddAgent(tumor);
  }

  // Run simulation with outputs at regular intervals - use smaller step size
  auto* scheduler = simulation.GetScheduler();
  
  // Output initial state
  std::cout << "Initial setup complete. Starting simulation..." << std::endl;
  
  // Define step size (number of steps per interval)
  int total_steps = 150;  // Reduced from 300
  int intervals = 1;
  int step_size = total_steps / intervals;
  
  // Run simulation in intervals and output status
  for (int i = 1; i <= intervals; i++) {
    scheduler->Simulate(step_size);
    
    // Count cells of each type
    std::map<CellType, size_t> counts;
    simulation.GetResourceManager()->ForEachAgent([&](Agent* agent) {
      if (auto* cell = dynamic_cast<MyCell*>(agent)) {
        counts[cell->GetCellType()]++;
      }
    });
    
    // Output progress
    std::cout << "Simulation " << (i * step_size) << "/" << total_steps << " steps completed." << std::endl;
    std::cout << "Current cell counts:" << std::endl;
    for (const auto& [type, count] : counts) {
      std::cout << "  Type " << static_cast<int>(type) << ": " << count << std::endl;
    }
  }

  std::cout << "Simulation completed successfully!" << std::endl;
  return 0;
}

}  // namespace my_tumor
}  // namespace bdm

#endif  // MY_TUMOR_H_