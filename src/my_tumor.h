#ifndef MY_TUMOR_H_
#define MY_TUMOR_H_

#include "biodynamo.h"
#include "brownian.h"

namespace bdm {
namespace my_tumor {

// -----------------------------------------------------------------------------
// MyTumorCell: a custom cell that models tumor and healthy cells
// -----------------------------------------------------------------------------
class MyTumorCell : public Cell {
  BDM_AGENT_HEADER(MyTumorCell, Cell, 1);

 public:
  MyTumorCell() : is_tumor_(false), cell_color_(0) {}
  
  explicit MyTumorCell(const Real3& position) : Base(position), 
                                                is_tumor_(false), 
                                                cell_color_(0) {}
  
  virtual ~MyTumorCell() {}

  // Copy constructor for cell division events
  MyTumorCell(const MyTumorCell& other) : Base(other), 
                                          is_tumor_(other.is_tumor_), 
                                          cell_color_(other.cell_color_) {}

  // Initialize during division
  void Initialize(const NewAgentEvent& event) override {
    Base::Initialize(event);
    if (auto* mother = dynamic_cast<MyTumorCell*>(event.existing_agent)) {
      is_tumor_ = mother->is_tumor_;
      cell_color_ = mother->cell_color_;
    }
  }

  // Getters and setters
  bool IsTumor() const { return is_tumor_; }
  void SetTumor(bool is_tumor) { 
    is_tumor_ = is_tumor; 
    // Set color based on cell type
    cell_color_ = is_tumor ? 2 : 1;  // Tumor cells are red (2), healthy cells are blue (1)
  }

  // Cell color for visualization
  void SetCellColor(int cell_color) { cell_color_ = cell_color; }
  int GetCellColor() const { return cell_color_; }

 private:
  bool is_tumor_;   // Whether this is a tumor cell
  int cell_color_;  // Cell color for visualization
};

// -----------------------------------------------------------------------------
// Growth behavior: simple behavior for cell growth and division
// -----------------------------------------------------------------------------
struct Growth : public Behavior {
  BDM_BEHAVIOR_HEADER(Growth, Behavior, 1);

  Growth() { AlwaysCopyToNew(); }
  virtual ~Growth() {}

  void Run(Agent* agent) override {
    if (auto* cell = dynamic_cast<MyTumorCell*>(agent)) {
      auto* random = Simulation::GetActive()->GetRandom();
      
      // Grow the cell until it reaches a given size
      if (cell->GetDiameter() < 8) {
        // Tumor cells grow faster than healthy cells
        double growth_rate = cell->IsTumor() ? 500 : 300;
        cell->ChangeVolume(growth_rate);
        
        // No random movement during growth - movement will be controlled solely by BrownianMotion
      } else {
        // Division probability is higher for tumor cells
        double division_probability = cell->IsTumor() ? 0.8 : 0.4;
        if (random->Uniform(0, 1) < division_probability) {
          cell->Divide();
        }
      }
    }
  }
};

// Custom Brownian motion behavior that handles tumor and healthy cells differently
struct TumorBrownianMotion : public Behavior {
  BDM_BEHAVIOR_HEADER(TumorBrownianMotion, Behavior, 1);

  TumorBrownianMotion() 
    : tumor_diffusion_(0), healthy_diffusion_(0) {
    AlwaysCopyToNew();
  }
  
  TumorBrownianMotion(double tumor_diffusion, double healthy_diffusion) 
    : tumor_diffusion_(tumor_diffusion), healthy_diffusion_(healthy_diffusion) {
    AlwaysCopyToNew();
  }
  
  virtual ~TumorBrownianMotion() {}

  void Run(Agent* agent) override {
    auto* cell = dynamic_cast<MyTumorCell*>(agent);
    if (!cell) return;
    
    auto* random = Simulation::GetActive()->GetRandom();
    
    // Select diffusion coefficient based on cell type
    double coefficient = cell->IsTumor() ? tumor_diffusion_ : healthy_diffusion_;
    
    // Create random displacement vector
    Real3 displacement = random->template UniformArray<3>(-coefficient, coefficient);
    
    // Apply the displacement to the cell
    cell->UpdatePosition(displacement);
  }

  double tumor_diffusion_;    // Diffusion coefficient for tumor cells
  double healthy_diffusion_;  // Diffusion coefficient for healthy cells
};

// -----------------------------------------------------------------------------
// Simulate(): set up and run the simulation.
// -----------------------------------------------------------------------------
inline int Simulate(int argc, const char** argv) {
  // Define simulation parameters
  auto set_param = [](Param* param) {
    param->bound_space = Param::BoundSpaceMode::kClosed;
    param->min_bound = 0;
    param->max_bound = 100;  // Cube: 100 x 100 x 100
  };

  Simulation simulation(argc, argv, set_param);
  auto* ctxt = simulation.GetExecutionContext();
  auto* param = simulation.GetParam();
  auto* myrand = simulation.GetRandom();

  // Set Brownian motion parameters
  double tumor_diffusion = 0.75;    // Diffusion coefficient for tumor cells
  double healthy_diffusion = 0.45;  // Diffusion coefficient for healthy cells

  // Create a population of healthy cells
  size_t nb_of_healthy_cells = 100;
  for (size_t i = 0; i < nb_of_healthy_cells; ++i) {
    Real3 position = { myrand->Uniform(param->min_bound, param->max_bound),
                       myrand->Uniform(param->min_bound, param->max_bound),
                       myrand->Uniform(param->min_bound, param->max_bound) };
    
    // Create a healthy cell
    MyTumorCell* cell = new MyTumorCell(position);
    cell->SetDiameter(5);
    cell->SetTumor(false);  // This is a healthy cell
    cell->AddBehavior(new Growth());
    
    // Add our custom Brownian motion with cell type specific diffusion coefficients
    cell->AddBehavior(new TumorBrownianMotion(tumor_diffusion, healthy_diffusion));
    
    ctxt->AddAgent(cell);
  }

  // Create multiple tumor cells
  size_t nb_of_tumor_cells = 3; // Change this number to adjust how many tumor cells to create

  // Create tumor cells in random positions clustered near center
  for (size_t i = 0; i < nb_of_tumor_cells; ++i) {
    // Generate random position for tumor cell (clustered near center)
    Real3 position = { 
      myrand->Uniform(40, 60),   // X coordinate (clustered near center)
      myrand->Uniform(40, 60),   // Y coordinate (clustered near center)
      myrand->Uniform(40, 60)    // Z coordinate (clustered near center)
    };
    
    // Create a tumor cell
    MyTumorCell* tumor_cell = new MyTumorCell(position);
    tumor_cell->SetDiameter(6.5);
    tumor_cell->SetTumor(true);  // This is a tumor cell
    tumor_cell->AddBehavior(new Growth());
    
    // Add our custom Brownian motion with cell type specific diffusion coefficients
    tumor_cell->AddBehavior(new TumorBrownianMotion(tumor_diffusion, healthy_diffusion));
    
    ctxt->AddAgent(tumor_cell);
  }

  // Run the simulation for 100 time steps
  simulation.GetScheduler()->Simulate(300);

  // Count cells at the end
  size_t healthy_count = 0;
  size_t tumor_count = 0;
  
  simulation.GetResourceManager()->ForEachAgent([&](Agent* agent) {
    if (auto* cell = dynamic_cast<MyTumorCell*>(agent)) {
      if (cell->IsTumor()) {
        tumor_count++;
      } else {
        healthy_count++;
      }
    }
  });
  
  std::cout << "Simulation completed successfully!" << std::endl;
  std::cout << "Final counts - Healthy cells: " << healthy_count 
            << ", Tumor cells: " << tumor_count << std::endl;
  
  return 0;
}

}  // namespace my_tumor
}  // namespace bdm

#endif  // MY_TUMOR_H_