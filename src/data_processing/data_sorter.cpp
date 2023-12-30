```cpp
#include "data_sorter.h"
#include <algorithm>

namespace DataProcessing {

DataSorter::DataSorter() {}

void DataSorter::sortData(std::vector<std::vector<std::string>>& data, const std::string& sortAlgorithm) {
    if (sortAlgorithm == "asc") {
        ascendingSort(data);
    } else if (sortAlgorithm == "desc") {
        descendingSort(data);
    } else {
        // Handle invalid sorting algorithm
        throw std::invalid_argument("Invalid sorting algorithm specified: " + sortAlgorithm);
    }
}

void DataSorter::ascendingSort(std::vector<std::vector<std::string>>& data) {
    std::sort(data.begin(), data.end(), [](const std::vector<std::string>& a, const std::vector<std::string>& b) {
        return a < b;
    });
}

void DataSorter::descendingSort(std::vector<std::vector<std::string>>& data) {
    std::sort(data.begin(), data.end(), [](const std::vector<std::string>& a, const std::vector<std::string>& b) {
        return a > b;
    });
}

} // namespace DataProcessing
```
