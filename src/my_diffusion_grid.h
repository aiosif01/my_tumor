#ifndef MY_DIFFUSION_GRID_H_
#define MY_DIFFUSION_GRID_H_

#include "biodynamo.h"

namespace bdm {
namespace my_tumor {

// We only have one substance now: RONS
inline constexpr int kRONSId = 0;

// 1) Define the diffusion grid for RONS
inline void DefineSubstances(Simulation* sim) {
  // diffusion=0.5, decay=0.1, resolution=20
  ModelInitializer::DefineSubstance(
      kRONSId, "RONS",
      /*diffusion=*/0.5,
      /*decay=*/0.1,
      /*resolution=*/20);
}

// 2) No need to manually seed via InitializeSubstance if we're using
//    a Dirichlet boundary that constantly holds the face at 1.0.

// 3) Enforce Dirichlet boundary (constant =1.0) on *all* domain faces.
//    This is equivalent to “injection” on the boundaries every step.
//    If you need only X‐min, see note below.
inline void AddRONSBoundaryConditions() {
  // This tells the diffusion solver to hold RONS=1.0 at every
  // boundary face at every timestep.
  ModelInitializer::AddBoundaryConditions(
      kRONSId,
      BoundaryConditionType::kDirichlet,
      std::make_unique<ConstantBoundaryCondition>(1.0));
}

}  // namespace my_tumor
}  // namespace bdm

#endif  // MY_DIFFUSION_GRID_H_
