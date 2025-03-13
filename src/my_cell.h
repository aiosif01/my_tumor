#ifndef MY_CELL_H_
#define MY_CELL_H_

#include "biodynamo.h"

namespace bdm {
namespace my_tumor {

enum class CellType {
  Tumor,
  HealthyEpithelial,
  Fibroblast,
  Immune,
  Endothelial
  // Add more types as needed
};

class MyCell : public Cell {
  BDM_AGENT_HEADER(MyCell, Cell, 1);

 public:
  // Default constructor
  MyCell() : cell_type_(CellType::HealthyEpithelial), cell_color_(0), brownian_(0.0) {}

  // Constructor with position initialization
  explicit MyCell(const Real3& position) 
    : Base(position), cell_type_(CellType::HealthyEpithelial), cell_color_(0), brownian_(0.0) {}

  // Corrected Copy Constructor for proper inheritance
  MyCell(const MyCell& other)
      : Cell(other),                               // Calls base class copy constructor
        cell_type_(other.cell_type_),              // Copies cell type
        cell_color_(other.cell_color_),            // Copies cell color
        brownian_(other.brownian_)                 // Copies brownian value explicitly
  {}

  void Initialize(const NewAgentEvent& event) override {
    Base::Initialize(event);
    if (auto* mother = dynamic_cast<MyCell*>(event.existing_agent)) {
      cell_type_ = mother->cell_type_;
      cell_color_ = mother->cell_color_;
      brownian_ = mother->brownian_;
    }
  }

  // Getter & Setter for Cell Type
  CellType GetCellType() const { return cell_type_; }
  void SetCellType(CellType ct) { 
    cell_type_ = ct; 
    UpdateCellColor(); 
  }

  // Getter & Setter for Cell Color
  int GetCellColor() const { return cell_color_; }
  void SetCellColor(int color) { cell_color_ = color; }

  // Getter & Setter for Brownian motion
  double GetBrownian() const { return brownian_; }
  void SetBrownian(double b) { brownian_ = b; }

 private:
  // Update cell color based on type
  void UpdateCellColor() {
    switch (cell_type_) {
      case CellType::Tumor: cell_color_ = 2; break;            // Red
      case CellType::HealthyEpithelial: cell_color_ = 1; break;// Blue
      case CellType::Fibroblast: cell_color_ = 3; break;       // Yellow
      case CellType::Immune: cell_color_ = 4; break;           // Green
      case CellType::Endothelial: cell_color_ = 5; break;      // Purple
      default: cell_color_ = 0; break;                         // Default
    }
  }

  // Member variables
  CellType cell_type_;
  int cell_color_;
  double brownian_;
};

}  // namespace my_tumor
}  // namespace bdm

#endif  // MY_CELL_H_
