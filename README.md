# Data Processing and Visualization System

This project is a C++ system that reads, processes, and visualizes data from multiple sources. The system supports data input in various formats, applies processing algorithms, and generates graphical representations of the data.

## Features

- Data Input Handling: Support for CSV, JSON, and XML formats. Efficient reading and parsing of large data files.
- Data Processing: Implement sorting, filtering, and basic statistical analysis. Custom algorithms for specific data transformations.
- Data Visualization: Generate charts and graphs from processed data. Interactive interface for selecting data and visualization types.
- Modular Design: Use object-oriented principles for maintainable and scalable code. Implement unit tests for each module.
- User Interface: Console-based menu for selecting files, processing options, and visualization types. Optional: Develop a graphical user interface (GUI).
- Documentation and Code Quality: Comprehensive documentation for each module and function. Adherence to C++ coding standards and best practices.

## Directory Structure

```
DataProcessingSystem/
├── include/
│   ├── data_input/
│   │   ├── csv_reader.h
│   │   ├── json_reader.h
│   │   └── xml_reader.h
│   ├── data_processing/
│   │   ├── data_sorter.h
│   │   ├── data_filter.h
│   │   └── statistics.h
│   └── data_visualization/
│       ├── chart_generator.h
│       └── graph_generator.h
├── src/
│   ├── data_input/
│   │   ├── csv_reader.cpp
│   │   ├── json_reader.cpp
│   │   └── xml_reader.cpp
│   ├── data_processing/
│   │   ├── data_sorter.cpp
│   │   ├── data_filter.cpp
│   │   └── statistics.cpp
│   └── data_visualization/
│       ├── chart_generator.cpp
│       └── graph_generator.cpp
├── tests/
│   ├── test_data_input.cpp
│   ├── test_data_processing.cpp
│   └── test_data_visualization.cpp
├── examples/
│   └── example_usage.cpp
├── docs/
│   └── project_documentation.md
├── Makefile
├── CMakeLists.txt
├── .gitignore
└── README.md
```

## Building the Project

You can build the project using either Makefile or CMakeLists.txt.

### Using Makefile

To build the project, navigate to the project directory and run the following command:

```
make
```

To clean the build, use the following command:

```
make clean
```

To run the tests, use the following command:

```
make test
```

### Using CMake

To build the project using CMake, navigate to the project directory and run the following commands:

```
mkdir build
cd build
cmake ..
make
```

To run the tests, use the following command:

```
ctest
```

## Documentation

For more details about each module and function, please refer to the `project_documentation.md` file in the `docs/` directory.

## Contributing

Contributions are welcome. Please fork the project and create a pull request with your changes.

