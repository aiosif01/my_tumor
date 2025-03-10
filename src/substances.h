#ifndef SUBSTANCES_H_
#define SUBSTANCES_H_

#include "biodynamo.h"
#include "my_diffusion_grid.h"  // For our helper functions

namespace bdm {
namespace my_tumor {

// The DefineSubstances function is now in my_diffusion_grid.h

// Define substance enum for easier reference
enum Substances {
  kTGFBeta = 0,
  kMMPs = 1
};

}  // namespace my_tumor
}  // namespace bdm

#endif  // SUBSTANCES_H_