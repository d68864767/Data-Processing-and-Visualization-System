```cpp
#ifndef DATA_VISUALIZATION_CHART_GENERATOR_H
#define DATA_VISUALIZATION_CHART_GENERATOR_H

#include <vector>
#include <string>

namespace DataVisualization {

class ChartGenerator {
public:
    // Constructor
    ChartGenerator();

    // Method to generate a chart from the data
    // The chart type can be specified by a string parameter
    // Default is a bar chart
    void generateChart(const std::vector<std::vector<std::string>>& data, const std::string& chartType = "bar");

private:
    // Method to generate a bar chart
    void generateBarChart(const std::vector<std::vector<std::string>>& data);

    // Method to generate a pie chart
    void generatePieChart(const std::vector<std::vector<std::string>>& data);

    // Add more chart generation methods as needed
};

} // namespace DataVisualization

#endif // DATA_VISUALIZATION_CHART_GENERATOR_H
```
