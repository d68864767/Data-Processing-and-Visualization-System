```cpp
#ifndef DATA_PROCESSING_STATISTICS_H
#define DATA_PROCESSING_STATISTICS_H

#include <vector>
#include <string>

namespace DataProcessing {

class Statistics {
public:
    // Constructor
    Statistics();

    // Method to calculate the mean of the data
    double calculateMean(const std::vector<std::vector<std::string>>& data);

    // Method to calculate the median of the data
    double calculateMedian(std::vector<std::vector<std::string>>& data);

    // Method to calculate the mode of the data
    std::vector<std::string> calculateMode(const std::vector<std::vector<std::string>>& data);

private:
    // Method to convert data to numerical format for calculations
    std::vector<double> convertToNumeric(const std::vector<std::string>& data);

    // Add more statistical methods as needed
};

} // namespace DataProcessing

#endif // DATA_PROCESSING_STATISTICS_H
```
