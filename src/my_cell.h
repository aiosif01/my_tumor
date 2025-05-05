#ifndef MY_CELL_H_
#define MY_CELL_H_

#include "biodynamo.h"
#include "parameters.h"

namespace bdm {
namespace my_tumor {

enum class CellType {
  Tumor,
  HealthyEpithelial,
  Fibroblast,
  Immune,
  Endothelial
};

class MyCell : public Cell {
  BDM_AGENT_HEADER(MyCell, Cell, 1);

 public:
  // Default constructor
  MyCell()
      : cell_type_(CellType::HealthyEpithelial), cell_color_(0),
        age_(0.0), lifespan_(GetLifespanFromType(CellType::HealthyEpithelial)) {}

  // Constructor with position initialization
  explicit MyCell(const Real3& position)
      : Base(position), cell_type_(CellType::HealthyEpithelial),
        cell_color_(0), age_(0.0), lifespan_(GetLifespanFromType(CellType::HealthyEpithelial)) {}

  // Copy Constructor for proper inheritance
  MyCell(const MyCell& other)
      : Cell(other),
        cell_type_(other.cell_type_),
        cell_color_(other.cell_color_),
        age_(other.age_),
        lifespan_(other.lifespan_) {}

  void Initialize(const NewAgentEvent& event) override {
    Base::Initialize(event);
    if (auto* mother = dynamic_cast<MyCell*>(event.existing_agent)) {
      cell_type_ = mother->cell_type_;
      cell_color_ = mother->cell_color_;
      lifespan_ = mother->lifespan_;
      age_ = 0.0;  // reset for daughter
    }
  }

  // --- Getters & Setters ---
  CellType GetCellType() const { return cell_type_; }
  void SetCellType(CellType ct) {
    cell_type_ = ct;
    lifespan_ = GetLifespanFromType(ct);  // Update lifespan when changing cell type
    UpdateCellColor();
  }

  int GetCellColor() const { return cell_color_; }
  void SetCellColor(int color) { cell_color_ = color; }

  double GetAge() const { return age_; }
  void IncreaseAge(double dt = 1.0) { age_ += dt; }

  double GetLifespan() const { return lifespan_; }
  void SetLifespan(double l) { lifespan_ = l; }

 private:
  // Helper to get lifespan based on cell type from parameters
  double GetLifespanFromType(CellType ct) {
    switch (ct) {
      case CellType::Tumor: return ModelParameters::kTumorLifespan;
      case CellType::HealthyEpithelial: return ModelParameters::kHealthyLifespan;
      case CellType::Fibroblast: return ModelParameters::kFibroblastLifespan;
      case CellType::Immune: return ModelParameters::kImmuneLifespan;
      case CellType::Endothelial: return ModelParameters::kEndothelialLifespan;
      default: return 100.0;  // Fallback value
    }
  }

  void UpdateCellColor() {
    switch (cell_type_) {
      case CellType::Tumor: cell_color_ = 2; break;
      case CellType::HealthyEpithelial: cell_color_ = 1; break;
      case CellType::Fibroblast: cell_color_ = 3; break;
      case CellType::Immune: cell_color_ = 4; break;
      case CellType::Endothelial: cell_color_ = 5; break;
      default: cell_color_ = 0; break;
    }
  }

  CellType cell_type_;
  int cell_color_;

  // Lifespan and age variables
  double age_;
  double lifespan_;
};

}  // namespace my_tumor
}  // namespace bdm

#endif  // MY_CELL_H_
