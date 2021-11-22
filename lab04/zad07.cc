#include <iostream>
#include <array>
#include <algorithm> // za sort

int main() {
    std::array<int, 5> array = { 76, 5, -3, 54, 21 };

    std::sort(array.begin(), array.end());

    for (int i = 0; i < array.size(); i++) {
        std::cout << array[i] << std::endl;
    }

    return 0;
}
