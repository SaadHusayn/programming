#include <iostream>
#include <unordered_map>

int main() {
    std::unordered_map<int, std::string> myMap;
    myMap[1] = "One";
    myMap[3] = "Three";
    myMap[2] = "Two";

    // Iterate over the unordered_map
    for (auto pair : myMap) {
        std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
    }

    return 0;
}
