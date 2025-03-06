#ifndef BROWNIAN_H_
#define BROWNIAN_H_

#include "biodynamo.h"

namespace bdm {

// Forward declaration to avoid circular dependency
namespace my_tumor {
class MyTumorCell;
}

// -----------------------------------------------------------------------------
// BrownianMotion: a behavior that adds random movement to cells to simulate
// thermal fluctuations and other random forces in the environment
// -----------------------------------------------------------------------------
struct BrownianMotion : public Behavior {
  BDM_BEHAVIOR_HEADER(BrownianMotion, Behavior, 1);

  BrownianMotion() : diffusion_coefficient_(0) { 
    AlwaysCopyToNew(); 
  }
  
  // Constructor with a single diffusion coefficient for all cells
  explicit BrownianMotion(double diffusion_coefficient) 
    : diffusion_coefficient_(diffusion_coefficient) { 
    AlwaysCopyToNew(); 
  }
  
  virtual ~BrownianMotion() {}

  void Run(Agent* agent) override {
    if (auto* cell = dynamic_cast<Cell*>(agent)) {
      auto* random = Simulation::GetActive()->GetRandom();
      
      // Create random displacement vector
      Real3 displacement = random->template UniformArray<3>(
          -diffusion_coefficient_, diffusion_coefficient_);
      
      // Apply the displacement to the cell
      cell->UpdatePosition(displacement);
    }
  }

  // Parameters
  double diffusion_coefficient_;  // Controls the magnitude of random movement
};

}  // namespace bdm

#endif  // BROWNIAN_H_