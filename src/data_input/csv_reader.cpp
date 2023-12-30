```cpp
#include "data_input/csv_reader.h"
#include <fstream>
#include <sstream>

namespace DataInput {

CSVReader::CSVReader(const std::string& filename) : filename(filename) {}

std::vector<std::vector<std::string>> CSVReader::readData() {
    std::ifstream file(filename);
    std::vector<std::vector<std::string>> data;
    std::string line;

    while (std::getline(file, line)) {
        std::vector<std::string> row;
        std::stringstream s(line);
        std::string cell;

        while (std::getline(s, cell, ',')) {
            row.push_back(cell);
        }

        data.push_back(row);
    }

    return data;
}

} // namespace DataInput
```
