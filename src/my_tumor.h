#ifndef MY_TUMOR_H_
#define MY_TUMOR_H_

#include "biodynamo.h"
#include "my_cell.h"
#include "behaviors.h"
#include "parameters.h"
#include "csv_reader.h"
#include "my_diffusion_grid.h"

namespace bdm {
namespace my_tumor {

inline int Simulate(int argc, const char** argv) {
  using bdm::my_tumor::ModelParameters;

  // 1) Load runtime parameters from CSV
  const char* csv_path = (argc >= 2 && argv[1][0] != '\0') ? argv[1] : "input.csv";
  ::CSVReader reader(csv_path);

  ModelParameters::kRandomSeed             = reader.GetUInt64("RandomSeed");
  ModelParameters::kMinBound               = reader.GetDouble("MinBound");
  ModelParameters::kMaxBound               = reader.GetDouble("MaxBound");
  ModelParameters::kTotalCells             = reader.GetSizeT("TotalCells");
  ModelParameters::kImmuneCells            = reader.GetSizeT("ImmuneCells");
  ModelParameters::kTumorCells             = reader.GetSizeT("TumorCells");
  ModelParameters::kTumorLifespan          = reader.GetDouble("TumorLifespan");
  ModelParameters::kHealthyLifespan        = reader.GetDouble("HealthyLifespan");
  ModelParameters::kFibroblastLifespan     = reader.GetDouble("FibroblastLifespan");
  ModelParameters::kImmuneLifespan         = reader.GetDouble("ImmuneLifespan");
  ModelParameters::kEndothelialLifespan    = reader.GetDouble("EndothelialLifespan");
  ModelParameters::kDefaultDiameter        = reader.GetDouble("DefaultDiameter");
  ModelParameters::kTumorDiameter          = reader.GetDouble("TumorDiameter");
  ModelParameters::kImmuneDiameter         = reader.GetDouble("ImmuneDiameter");
  ModelParameters::kTumorGrowthRate        = reader.GetDouble("TumorGrowthRate");
  ModelParameters::kHealthyGrowthRate      = reader.GetDouble("HealthyGrowthRate");
  ModelParameters::kFibroblastGrowthRate   = reader.GetDouble("FibroblastGrowthRate");
  ModelParameters::kImmuneGrowthRate       = reader.GetDouble("ImmuneGrowthRate");
  ModelParameters::kEndothelialGrowthRate  = reader.GetDouble("EndothelialGrowthRate");
  ModelParameters::kTumorDivisionProb      = reader.GetDouble("TumorDivisionProb");
  ModelParameters::kHealthyDivisionProb    = reader.GetDouble("HealthyDivisionProb");
  ModelParameters::kFibroblastDivisionProb = reader.GetDouble("FibroblastDivisionProb");
  ModelParameters::kImmuneDivisionProb     = reader.GetDouble("ImmuneDivisionProb");
  ModelParameters::kEndothelialDivisionProb= reader.GetDouble("EndothelialDivisionProb");
  ModelParameters::kTumorMaxDiameter       = reader.GetDouble("TumorMaxDiameter");
  ModelParameters::kHealthyMaxDiameter     = reader.GetDouble("HealthyMaxDiameter");
  ModelParameters::kFibroblastMaxDiameter  = reader.GetDouble("FibroblastMaxDiameter");
  ModelParameters::kImmuneMaxDiameter      = reader.GetDouble("ImmuneMaxDiameter");
  ModelParameters::kEndothelialMaxDiameter = reader.GetDouble("EndothelialMaxDiameter");
  ModelParameters::kTumorDiffusion         = reader.GetDouble("TumorDiffusion");
  ModelParameters::kHealthyDiffusion       = reader.GetDouble("HealthyDiffusion");
  ModelParameters::kFibroblastDiffusion    = reader.GetDouble("FibroblastDiffusion");
  ModelParameters::kImmuneDiffusion        = reader.GetDouble("ImmuneDiffusion");
  ModelParameters::kEndothelialDiffusion   = reader.GetDouble("EndothelialDiffusion");
  ModelParameters::kTumorAdhesion          = reader.GetDouble("TumorAdhesion");
  ModelParameters::kHealthyAdhesion        = reader.GetDouble("HealthyAdhesion");
  ModelParameters::kFibroblastAdhesion     = reader.GetDouble("FibroblastAdhesion");
  ModelParameters::kImmuneAdhesion         = reader.GetDouble("ImmuneAdhesion");
  ModelParameters::kEndothelialAdhesion    = reader.GetDouble("EndothelialAdhesion");
  ModelParameters::kTumorRepulsion         = reader.GetDouble("TumorRepulsion");
  ModelParameters::kHealthyRepulsion       = reader.GetDouble("HealthyRepulsion");
  ModelParameters::kFibroblastRepulsion    = reader.GetDouble("FibroblastRepulsion");
  ModelParameters::kImmuneRepulsion        = reader.GetDouble("ImmuneRepulsion");
  ModelParameters::kEndothelialRepulsion   = reader.GetDouble("EndothelialRepulsion");
  ModelParameters::kBoundaryBuffer         = reader.GetDouble("BoundaryBuffer");
  ModelParameters::kTumorCenterMin         = reader.GetDouble("TumorCenterMin");
  ModelParameters::kTumorCenterMax         = reader.GetDouble("TumorCenterMax");
  ModelParameters::kImmuneCellBuffer       = reader.GetDouble("ImmuneCellBuffer");
  ModelParameters::kFibroblastLayerMax     = reader.GetDouble("FibroblastLayerMax");
  ModelParameters::kEpithelialLayerMax     = reader.GetDouble("EpithelialLayerMax");
  ModelParameters::kSimulationSteps        = reader.GetInt   ("SimulationSteps");
  ModelParameters::kOutputIntervals        = reader.GetInt   ("OutputIntervals");
  ModelParameters::kAdhesionRadius         = reader.GetDouble("AdhesionRadius");
  ModelParameters::kRepulsionRadius        = reader.GetDouble("RepulsionRadius");

  // Optional override of seed via argv[2]
  if (argc >= 3) {
    ModelParameters::kRandomSeed = std::stoull(argv[2]);
  }

  // BioDynaMo initialization lambda
  auto set_param = [](Param* param) {
    param->bound_space = Param::BoundSpaceMode::kClosed;
    param->min_bound   = ModelParameters::kMinBound;
    param->max_bound   = ModelParameters::kMaxBound;
    param->random_seed = ModelParameters::kRandomSeed;
  };

  // 2) Create BioDynaMo simulation
  Simulation simulation(argc, argv, set_param);

  // ── Begin diffusion/grid setup ───────────────────────────────────
  // 1) Define RONS diffusion
  DefineSubstances(&simulation);

  // 2) Hold RONS = 1.0 on all faces (Dirichlet BC)
  AddRONSBoundaryConditions();
  // ── End diffusion/grid setup ─────────────────────────────────────

  // 3) Retrieve contexts & random
  auto* ctxt   = simulation.GetExecutionContext();
  auto* myrand = simulation.GetRandom();
  

  // Create healthy/fibroblast/endothelial cells
  size_t total_cells = ModelParameters::kTotalCells;
  for (size_t i = 0; i < total_cells; ++i) {
    Real3 pos = {
      myrand->Uniform(ModelParameters::kBoundaryBuffer,
                      ModelParameters::kMaxBound - ModelParameters::kBoundaryBuffer),
      myrand->Uniform(ModelParameters::kBoundaryBuffer,
                      ModelParameters::kMaxBound - ModelParameters::kBoundaryBuffer),
      myrand->Uniform(ModelParameters::kBoundaryBuffer,
                      ModelParameters::kMaxBound - ModelParameters::kBoundaryBuffer)
    };
    MyCell* cell = new MyCell(pos);
    cell->SetDiameter(ModelParameters::kDefaultDiameter);

    real_t y = pos[1];
    if (y < ModelParameters::kFibroblastLayerMax) {
      cell->SetCellType(CellType::Fibroblast);
    } else if (y < ModelParameters::kEpithelialLayerMax) {
      cell->SetCellType(CellType::HealthyEpithelial);
    } else {
      cell->SetCellType(CellType::Endothelial);
    }

    cell->AddBehavior(new AgingBehavior());
    cell->AddBehavior(new GrowthBehavior());
    cell->AddBehavior(new DivisionBehavior());
    cell->AddBehavior(new BrownianMotionBehavior());
    cell->AddBehavior(new AdhesionBehavior());
    cell->AddBehavior(new RepulsionBehavior());
    ctxt->AddAgent(cell);
  }

  // Create immune cells
  size_t immune_cells = ModelParameters::kImmuneCells;
  for (size_t i = 0; i < immune_cells; ++i) {
    Real3 pos = {
      myrand->Uniform(ModelParameters::kImmuneCellBuffer,
                      ModelParameters::kMaxBound - ModelParameters::kImmuneCellBuffer),
      myrand->Uniform(ModelParameters::kImmuneCellBuffer,
                      ModelParameters::kMaxBound - ModelParameters::kImmuneCellBuffer),
      myrand->Uniform(ModelParameters::kImmuneCellBuffer,
                      ModelParameters::kMaxBound - ModelParameters::kImmuneCellBuffer)
    };
    MyCell* immune = new MyCell(pos);
    immune->SetDiameter(ModelParameters::kImmuneDiameter);
    immune->SetCellType(CellType::Immune);
    immune->AddBehavior(new BrownianMotionBehavior());
    immune->AddBehavior(new AdhesionBehavior());
    immune->AddBehavior(new RepulsionBehavior());
    ctxt->AddAgent(immune);
  }

  // Create tumor cells
  size_t tumor_cells = ModelParameters::kTumorCells;
  for (size_t i = 0; i < tumor_cells; ++i) {
    Real3 pos = {
      myrand->Uniform(ModelParameters::kTumorCenterMin, ModelParameters::kTumorCenterMax),
      myrand->Uniform(ModelParameters::kTumorCenterMin, ModelParameters::kTumorCenterMax),
      myrand->Uniform(ModelParameters::kTumorCenterMin, ModelParameters::kTumorCenterMax)
    };
    MyCell* tumor = new MyCell(pos);
    tumor->SetDiameter(ModelParameters::kTumorDiameter);
    tumor->SetCellType(CellType::Tumor);
    tumor->AddBehavior(new AgingBehavior());
    tumor->AddBehavior(new GrowthBehavior());
    tumor->AddBehavior(new DivisionBehavior());
    tumor->AddBehavior(new BrownianMotionBehavior());
    tumor->AddBehavior(new AdhesionBehavior());
    tumor->AddBehavior(new RepulsionBehavior());
    tumor->AddBehavior(new ApoptosisBehavior());
    ctxt->AddAgent(tumor);
  }

  // Run and report
  auto* scheduler = simulation.GetScheduler();
  std::cout << "Initial setup complete. Starting simulation..." << std::endl;

  int total_steps = ModelParameters::kSimulationSteps;
  int intervals   = ModelParameters::kOutputIntervals;
  int step_size   = total_steps / intervals;

  for (int i = 1; i <= intervals; ++i) {
    scheduler->Simulate(step_size);
    std::map<CellType, size_t> counts;
    simulation.GetResourceManager()->ForEachAgent([&](Agent* agent) {
      if (auto* cell = dynamic_cast<MyCell*>(agent)) {
        counts[cell->GetCellType()]++;
      }
    });
    std::cout << "Simulation " << (i * step_size) << "/" << total_steps
              << " steps completed.\nCurrent cell counts:\n";
    for (auto& [type, count] : counts) {
      std::cout << "  Type " << static_cast<int>(type) << ": " << count << "\n";
    }
  }

  std::cout << "Simulation completed successfully!" << std::endl;
  return 0;
}

}  // namespace my_tumor
}  // namespace bdm

#endif  // MY_TUMOR_H_
