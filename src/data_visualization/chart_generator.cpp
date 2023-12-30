```cpp
#include "chart_generator.h"
#include <iostream>

namespace DataVisualization {

// Constructor
ChartGenerator::ChartGenerator() {}

// Method to generate a chart from the data
void ChartGenerator::generateChart(const std::vector<std::vector<std::string>>& data, const std::string& chartType) {
    if (chartType == "bar") {
        generateBarChart(data);
    } else if (chartType == "pie") {
        generatePieChart(data);
    } else {
        std::cout << "Invalid chart type. Please choose either 'bar' or 'pie'." << std::endl;
    }
}

// Method to generate a bar chart
void ChartGenerator::generateBarChart(const std::vector<std::vector<std::string>>& data) {
    // Implementation of bar chart generation goes here
    // This is a placeholder and needs to be replaced with actual code
    std::cout << "Generating bar chart..." << std::endl;
}

// Method to generate a pie chart
void ChartGenerator::generatePieChart(const std::vector<std::vector<std::string>>& data) {
    // Implementation of pie chart generation goes here
    // This is a placeholder and needs to be replaced with actual code
    std::cout << "Generating pie chart..." << std::endl;
}

} // namespace DataVisualization
```
