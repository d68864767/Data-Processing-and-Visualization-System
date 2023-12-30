```cpp
#ifndef DATA_PROCESSING_DATA_SORTER_H
#define DATA_PROCESSING_DATA_SORTER_H

#include <vector>
#include <string>

namespace DataProcessing {

class DataSorter {
public:
    // Constructor
    DataSorter();

    // Method to sort the data
    // The sorting algorithm can be specified by a string parameter
    // Default is ascending order
    void sortData(std::vector<std::vector<std::string>>& data, const std::string& sortAlgorithm = "asc");

private:
    // Method to perform ascending sort
    void ascendingSort(std::vector<std::vector<std::string>>& data);

    // Method to perform descending sort
    void descendingSort(std::vector<std::vector<std::string>>& data);

    // Add more sorting methods as needed
};

} // namespace DataProcessing

#endif // DATA_PROCESSING_DATA_SORTER_H
```
