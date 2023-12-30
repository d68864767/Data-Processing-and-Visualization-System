```cpp
#include "../include/data_input/csv_reader.h"
#include "../include/data_input/json_reader.h"
#include "../include/data_input/xml_reader.h"
#include "../include/data_processing/data_sorter.h"
#include "../include/data_processing/data_filter.h"
#include "../include/data_processing/statistics.h"
#include "../include/data_visualization/chart_generator.h"
#include "../include/data_visualization/graph_generator.h"

#include <iostream>
#include <string>

int main() {
    // Create instances of data readers
    DataInput::CSVReader csvReader("data.csv");
    DataInput::JSONReader jsonReader("data.json");
    DataInput::XMLReader xmlReader("data.xml");

    // Read data from files
    auto csvData = csvReader.readData();
    auto jsonData = jsonReader.readData();
    auto xmlData = xmlReader.readData();

    // Create instances of data processing classes
    DataProcessing::DataSorter dataSorter;
    DataProcessing::DataFilter dataFilter;
    DataProcessing::Statistics statistics;

    // Sort data
    dataSorter.sortData(csvData, "asc");
    dataSorter.sortData(jsonData, "desc");
    dataSorter.sortData(xmlData, "asc");

    // Filter data
    dataFilter.filterData(csvData, "filterCriteria");
    dataFilter.filterData(jsonData, "filterCriteria");
    dataFilter.filterData(xmlData, "filterCriteria");

    // Calculate statistics
    auto csvMean = statistics.calculateMean(csvData);
    auto jsonMedian = statistics.calculateMedian(jsonData);
    auto xmlMode = statistics.calculateMode(xmlData);

    // Print statistics
    std::cout << "CSV Mean: " << csvMean << std::endl;
    std::cout << "JSON Median: " << jsonMedian << std::endl;
    std::cout << "XML Mode: ";
    for (const auto& mode : xmlMode) {
        std::cout << mode << " ";
    }
    std::cout << std::endl;

    // Create instances of data visualization classes
    DataVisualization::ChartGenerator chartGenerator;
    DataVisualization::GraphGenerator graphGenerator;

    // Generate visualizations
    chartGenerator.generateChart(csvData, "CSV Data");
    graphGenerator.generateGraph(jsonData, "JSON Data");

    return 0;
}
```
