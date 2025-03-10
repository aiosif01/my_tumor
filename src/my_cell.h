#ifndef MY_CELL_H_
#define MY_CELL_H_

#include "biodynamo.h"

namespace bdm {
namespace my_tumor {

enum class CellType {
  HealthyEpithelial,
  Tumor,
  Fibroblast,
  Immune,
  Endothelial
  // Add more types as needed
};

class MyCell : public Cell {
  BDM_AGENT_HEADER(MyCell, Cell, 1);

 public:
  MyCell() : cell_type_(CellType::HealthyEpithelial), cell_color_(0) {}
  explicit MyCell(const Real3& position)
      : Base(position), cell_type_(CellType::HealthyEpithelial), cell_color_(0) {}
  virtual ~MyCell() {}

  // Copy constructor for division
  MyCell(const MyCell& other)
      : Base(other), cell_type_(other.cell_type_), cell_color_(other.cell_color_) {}

  void Initialize(const NewAgentEvent& event) override {
    Base::Initialize(event);
    if (auto* mother = dynamic_cast<MyCell*>(event.existing_agent)) {
      cell_type_ = mother->cell_type_;
      cell_color_ = mother->cell_color_;
    }
  }

  // Getters and setters
  void SetCellType(CellType type) {
    cell_type_ = type;
    UpdateCellColor();
  }
  CellType GetCellType() const { return cell_type_; }

  void SetCellColor(int color) { cell_color_ = color; }
  int GetCellColor() const { return cell_color_; }

 private:
  void UpdateCellColor() {
    switch (cell_type_) {
      case CellType::Tumor: cell_color_ = 2; break;           // Red
      case CellType::HealthyEpithelial: cell_color_ = 1; break; // Blue
      case CellType::Fibroblast: cell_color_ = 3; break;      // Green
      case CellType::Immune: cell_color_ = 4; break;         // Yellow
      case CellType::Endothelial: cell_color_ = 5; break;    // Purple
      default: cell_color_ = 0;                              // Default
    }
  }

  CellType cell_type_;
  int cell_color_;
};

}  // namespace my_tumor
}  // namespace bdm

#endif  // MY_CELL_H_