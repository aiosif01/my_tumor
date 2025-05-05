#ifndef RONS_INJECTION_OP_H_
#define RONS_INJECTION_OP_H_

#include "biodynamo.h"
#include "my_diffusion_grid.h"

namespace bdm {
namespace my_tumor {

// Every standalone op **must** use BDM_OP_HEADER, but we put the registration
// *inline* to avoid duplicate‐symbol problems in rootcling.
struct RONSInjectionOp : public StandaloneOperationImpl {
  BDM_OP_HEADER(RONSInjectionOp);
  void operator()() override {
    auto* sim  = Simulation::GetActive();
    auto* p    = sim->GetParam();
    // Access by grid *name*
    auto* grid = sim->GetResourceManager()->GetDiffusionGrid("RONS");
    if (!grid) return;
    real_t step = grid->GetResolution();
    // Loop over the YZ plane at x = min_bound
    for (real_t y = p->min_bound; y <= p->max_bound; y += step) {
      for (real_t z = p->min_bound; z <= p->max_bound; z += step) {
        grid->ChangeConcentrationBy({p->min_bound, y, z}, 0.1);
      }
    }
  }
};

// Inline registration avoids “multiple definition” errors
inline BDM_REGISTER_OP(RONSInjectionOp, "RONS injection", kCpu);

}  // namespace my_tumor
}  // namespace bdm

#endif  // RONS_INJECTION_OP_H_
