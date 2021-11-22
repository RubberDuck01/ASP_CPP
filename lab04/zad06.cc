#include <iostream>
#include <array>

int main() {
    std::array<int, 10000> array1;

    array1.fill(1);

    for (int i = 0; i < array1.size(); i++) {
        std::cout << array1[i] << std::endl;
    }

    std::cout << "Array size: " << array1.size() << std::endl;

    return 0;
}
