```cpp
#ifndef DATA_INPUT_JSON_READER_H
#define DATA_INPUT_JSON_READER_H

#include <string>
#include <vector>

namespace DataInput {

class JSONReader {
public:
    // Constructor
    JSONReader(const std::string& filename);

    // Method to read the JSON file and store the data
    std::vector<std::vector<std::string>> readData();

private:
    std::string filename;
};

} // namespace DataInput

#endif // DATA_INPUT_JSON_READER_H
```
