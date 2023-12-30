```cpp
#ifndef DATA_VISUALIZATION_GRAPH_GENERATOR_H
#define DATA_VISUALIZATION_GRAPH_GENERATOR_H

#include <vector>
#include <string>

namespace DataVisualization {

class GraphGenerator {
public:
    // Constructor
    GraphGenerator();

    // Method to generate a graph from the data
    // The graph type can be specified by a string parameter
    // Default is a line graph
    void generateGraph(const std::vector<std::vector<std::string>>& data, const std::string& graphType = "line");

private:
    // Method to generate a line graph
    void generateLineGraph(const std::vector<std::vector<std::string>>& data);

    // Method to generate a scatter plot
    void generateScatterPlot(const std::vector<std::vector<std::string>>& data);

    // Add more graph generation methods as needed
};

} // namespace DataVisualization

#endif // DATA_VISUALIZATION_GRAPH_GENERATOR_H
```
