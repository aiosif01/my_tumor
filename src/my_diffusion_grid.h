#ifndef MY_DIFFUSION_GRID_H_
#define MY_DIFFUSION_GRID_H_

#include "biodynamo.h"

namespace bdm {
namespace my_tumor {

inline void DefineSubstances(Simulation* simulation) {
  // Initialize with a higher resolution (20 instead of 10) for better coverage
  ModelInitializer::DefineSubstance(0, "TGF-beta", 0.1, 0.01, 20);
  ModelInitializer::DefineSubstance(1, "MMPs", 0.15, 0.02, 20);
}

// Helper functions with position bounds checking
inline void IncreaseConcentrationAt(const std::string& substance_name, const Real3& position, real_t value) {
  auto* rm = Simulation::GetActive()->GetResourceManager();
  auto* grid = rm->GetDiffusionGrid(substance_name);
  if (grid) {
    // Check if position is within simulation bounds
    auto* param = Simulation::GetActive()->GetParam();
    Real3 clamped_pos = position;
    for (int i = 0; i < 3; i++) {
      clamped_pos[i] = std::clamp(position[i], 
                                 param->min_bound + 1.0, 
                                 param->max_bound - 1.0);
    }
    
    // Now safely modify the concentration
    grid->ChangeConcentrationBy(clamped_pos, value);
  }
}

inline real_t GetConcentrationAt(const std::string& substance_name, const Real3& position) {
  auto* rm = Simulation::GetActive()->GetResourceManager();
  auto* grid = rm->GetDiffusionGrid(substance_name);
  if (grid) {
    // Check if position is within simulation bounds
    auto* param = Simulation::GetActive()->GetParam();
    Real3 clamped_pos = position;
    for (int i = 0; i < 3; i++) {
      clamped_pos[i] = std::clamp(position[i], 
                                 param->min_bound + 1.0, 
                                 param->max_bound - 1.0);
    }
    
    return grid->GetValue(clamped_pos);
  }
  return 0.0;
}

}  // namespace my_tumor
}  // namespace bdm

#endif  // MY_DIFFUSION_GRID_H_