#ifndef PARAMETERS_H_
#define PARAMETERS_H_

#include <cstddef>
#include <cstdint>

namespace bdm {
namespace my_tumor {

// Model parameters loaded and modifiable at runtime via CSV
struct ModelParameters {
  inline static uint64_t kRandomSeed          = 42;
  inline static double   kMinBound            = 0.0;
  inline static double   kMaxBound            = 100.0;

  inline static std::size_t kTotalCells       = 20;
  inline static std::size_t kImmuneCells      = 5;
  inline static std::size_t kTumorCells       = 10;

  inline static double kTumorLifespan         = 170.0;
  inline static double kHealthyLifespan       = 150.0;
  inline static double kFibroblastLifespan    = 150.0;
  inline static double kImmuneLifespan        = 150.0;
  inline static double kEndothelialLifespan   = 150.0;

  inline static double kDefaultDiameter       = 5.0;
  inline static double kTumorDiameter         = 6.5;
  inline static double kImmuneDiameter        = 3.0;

  inline static double kTumorGrowthRate       = 250.0;
  inline static double kHealthyGrowthRate     = 0.0;
  inline static double kFibroblastGrowthRate  = 0.0;
  inline static double kImmuneGrowthRate      = 0.0;
  inline static double kEndothelialGrowthRate = 0.0;

  inline static double kTumorDivisionProb         = 0.75;
  inline static double kHealthyDivisionProb       = 0.0;
  inline static double kFibroblastDivisionProb    = 0.0;
  inline static double kImmuneDivisionProb        = 0.0;
  inline static double kEndothelialDivisionProb   = 0.0;

  inline static double kTumorMaxDiameter       = 8.0;
  inline static double kHealthyMaxDiameter     = 0.0;
  inline static double kFibroblastMaxDiameter  = 0.0;
  inline static double kImmuneMaxDiameter      = 0.0;
  inline static double kEndothelialMaxDiameter = 0.0;

  inline static double kTumorDiffusion         = 0.5;
  inline static double kHealthyDiffusion       = 0.0;
  inline static double kFibroblastDiffusion    = 0.0;
  inline static double kImmuneDiffusion        = 0.0;
  inline static double kEndothelialDiffusion   = 0.0;

  inline static double kTumorAdhesion          = 0.0;
  inline static double kHealthyAdhesion        = 0.0;
  inline static double kFibroblastAdhesion     = 0.0;
  inline static double kImmuneAdhesion         = 0.0;
  inline static double kEndothelialAdhesion    = 0.0;

  inline static double kTumorRepulsion         = 0.0;
  inline static double kHealthyRepulsion       = 0.0;
  inline static double kFibroblastRepulsion    = 0.0;
  inline static double kImmuneRepulsion        = 0.0;
  inline static double kEndothelialRepulsion   = 0.0;

  inline static double kBoundaryBuffer         = 5.0;
  inline static double kTumorCenterMin         = 45.0;
  inline static double kTumorCenterMax         = 55.0;
  inline static double kImmuneCellBuffer       = 0.0;

  inline static double kFibroblastLayerMax     = 0.0;
  inline static double kEpithelialLayerMax     = 0.0;

  inline static int    kSimulationSteps        = 500;
  inline static int    kOutputIntervals        = 15;

  inline static double kAdhesionRadius         = 0.0;
  inline static double kRepulsionRadius        = 12.0;
};

}  // namespace my_tumor
}  // namespace bdm

#endif  // PARAMETERS_H_
