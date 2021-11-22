#include <iostream>
#include <string>
#include <array>

int main() {
    std::array<int, 5> intArray = { 1, 2, 3, 4, 5 };
    std::array<float, 5> floatArray = { 1.2, -33.4, 54.2, 69.42, -76.18 };
    std::array<std::string, 5> stringArray = { "Ovo", "je", "kao", "neki", "string-Array" };

    std::cout << "intArray:\n";
    for (int i = 0; i < intArray.size(); i++) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "floatArray:\n";
    for (int i = 0; i < floatArray.size(); i++) {
        std::cout << floatArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "stringArray:\n";
    for (int i = 0; i < stringArray.size(); i++) {
        std::cout << stringArray[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "\nSIZE:" << std::endl;
    std::cout << "Size intArray: " << intArray.size() << std::endl;
    std::cout << "Size floatArray: " << floatArray.size() << std::endl;
    std::cout << "Size stringArray: " << stringArray.size() << std::endl;

    return 0;
}
