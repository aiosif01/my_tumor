#ifndef CSV_READER_H_
#define CSV_READER_H_

#include <fstream>
#include <sstream>
#include <string>
#include <unordered_map>
#include <stdexcept>

class CSVReader {
 public:
  explicit CSVReader(const std::string& file_path) {
    std::ifstream file(file_path);
    if (!file.is_open()) {
      throw std::runtime_error("Cannot open CSV file: " + file_path);
    }

    std::string line;
    std::getline(file, line);  // Skip header

    while (std::getline(file, line)) {
      std::istringstream ss(line);
      std::string key, type, value;
      if (std::getline(ss, key, ',') &&
          std::getline(ss, type, ',') &&
          std::getline(ss, value)) {
        parameters_[key] = value;
      }
    }
  }

  // Getter methods
  int GetInt(const std::string& key) const {
    return std::stoi(Get(key));
  }

  std::size_t GetSizeT(const std::string& key) const {
    return static_cast<std::size_t>(std::stoul(Get(key)));
  }

  uint64_t GetUInt64(const std::string& key) const {
    return static_cast<uint64_t>(std::stoull(Get(key)));
  }

  double GetDouble(const std::string& key) const {
    return std::stod(Get(key));
  }

  bool GetBool(const std::string& key) const {
    const auto& val = Get(key);
    return val == "true" || val == "1";
  }

 private:
  std::unordered_map<std::string, std::string> parameters_;

  const std::string& Get(const std::string& key) const {
    auto it = parameters_.find(key);
    if (it == parameters_.end()) {
      throw std::runtime_error("Missing parameter: " + key);
    }
    return it->second;
  }
};

#endif  // CSV_READER_H_
