cmake_minimum_required(VERSION 3.10)

# set the project name
project(DataProcessingSystem)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 14)

# add the executable
add_executable(DataProcessingSystem src/data_input/csv_reader.cpp src/data_input/json_reader.cpp src/data_input/xml_reader.cpp src/data_processing/data_sorter.cpp src/data_processing/data_filter.cpp src/data_processing/statistics.cpp src/data_visualization/chart_generator.cpp src/data_visualization/graph_generator.cpp examples/example_usage.cpp)

# include directories
include_directories(include/data_input include/data_processing include/data_visualization)

# add the binary tree to the search path for include files
# so that we will find TutorialConfig.h
target_include_directories(DataProcessingSystem PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           )

# add the tests
enable_testing()

add_test(NAME TestDataInput COMMAND DataProcessingSystem tests/test_data_input.cpp)
add_test(NAME TestDataProcessing COMMAND DataProcessingSystem tests/test_data_processing.cpp)
add_test(NAME TestDataVisualization COMMAND DataProcessingSystem tests/test_data_visualization.cpp)
