```cpp
#include "data_input/xml_reader.h"
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <tinyxml2.h>

namespace DataInput {

XMLReader::XMLReader(const std::string& filename) : filename(filename) {}

std::vector<std::vector<std::string>> XMLReader::readData() {
    std::vector<std::vector<std::string>> data;

    tinyxml2::XMLDocument doc;
    if (doc.LoadFile(filename.c_str()) != tinyxml2::XML_SUCCESS) {
        throw std::runtime_error("Failed to load XML file: " + filename);
    }

    tinyxml2::XMLElement* root = doc.RootElement();
    if (!root) {
        throw std::runtime_error("Failed to get root element in XML file: " + filename);
    }

    for (tinyxml2::XMLElement* child = root->FirstChildElement(); child != nullptr; child = child->NextSiblingElement()) {
        std::vector<std::string> row;
        for (tinyxml2::XMLElement* grandChild = child->FirstChildElement(); grandChild != nullptr; grandChild = grandChild->NextSiblingElement()) {
            const char* text = grandChild->GetText();
            if (text) {
                row.push_back(text);
            }
        }
        data.push_back(row);
    }

    return data;
}

} // namespace DataInput
```
