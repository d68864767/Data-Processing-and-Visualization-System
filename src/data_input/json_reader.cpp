```cpp
#include "data_input/json_reader.h"
#include <fstream>
#include <sstream>
#include <nlohmann/json.hpp>

namespace DataInput {

JSONReader::JSONReader(const std::string& filename) : filename(filename) {}

std::vector<std::vector<std::string>> JSONReader::readData() {
    std::vector<std::vector<std::string>> data;
    std::ifstream file(filename);

    if (!file.is_open()) {
        throw std::runtime_error("Could not open file " + filename);
    }

    nlohmann::json jsonData;
    file >> jsonData;

    for (const auto& item : jsonData) {
        std::vector<std::string> row;
        for (const auto& element : item) {
            row.push_back(element.get<std::string>());
        }
        data.push_back(row);
    }

    file.close();
    return data;
}

} // namespace DataInput
```
