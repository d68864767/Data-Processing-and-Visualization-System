```cpp
#include "data_processing/statistics.h"
#include <algorithm>
#include <map>
#include <stdexcept>

namespace DataProcessing {

Statistics::Statistics() {}

double Statistics::calculateMean(const std::vector<std::vector<std::string>>& data) {
    double sum = 0.0;
    int count = 0;

    for (const auto& row : data) {
        auto numericData = convertToNumeric(row);
        sum += std::accumulate(numericData.begin(), numericData.end(), 0.0);
        count += numericData.size();
    }

    if (count == 0) {
        throw std::runtime_error("No numeric data available for mean calculation.");
    }

    return sum / count;
}

double Statistics::calculateMedian(std::vector<std::vector<std::string>>& data) {
    std::vector<double> allData;

    for (auto& row : data) {
        auto numericData = convertToNumeric(row);
        allData.insert(allData.end(), numericData.begin(), numericData.end());
    }

    if (allData.empty()) {
        throw std::runtime_error("No numeric data available for median calculation.");
    }

    std::sort(allData.begin(), allData.end());

    size_t size = allData.size();
    if (size % 2 == 0) {
        return (allData[size / 2 - 1] + allData[size / 2]) / 2;
    } else {
        return allData[size / 2];
    }
}

std::vector<std::string> Statistics::calculateMode(const std::vector<std::vector<std::string>>& data) {
    std::map<std::string, int> frequencyMap;

    for (const auto& row : data) {
        for (const auto& item : row) {
            frequencyMap[item]++;
        }
    }

    std::vector<std::string> modes;
    int maxFrequency = 0;

    for (const auto& pair : frequencyMap) {
        if (pair.second > maxFrequency) {
            modes.clear();
            modes.push_back(pair.first);
            maxFrequency = pair.second;
        } else if (pair.second == maxFrequency) {
            modes.push_back(pair.first);
        }
    }

    return modes;
}

std::vector<double> Statistics::convertToNumeric(const std::vector<std::string>& data) {
    std::vector<double> numericData;
    for (const auto& item : data) {
        try {
            numericData.push_back(std::stod(item));
        } catch (const std::invalid_argument&) {
            // Ignore non-numeric data
        }
    }
    return numericData;
}

} // namespace DataProcessing
```
