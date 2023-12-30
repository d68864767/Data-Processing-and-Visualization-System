```cpp
#ifndef DATA_INPUT_CSV_READER_H
#define DATA_INPUT_CSV_READER_H

#include <string>
#include <vector>

namespace DataInput {

class CSVReader {
public:
    // Constructor
    CSVReader(const std::string& filename);

    // Method to read the CSV file and store the data
    std::vector<std::vector<std::string>> readData();

private:
    std::string filename;
};

} // namespace DataInput

#endif // DATA_INPUT_CSV_READER_H
```
