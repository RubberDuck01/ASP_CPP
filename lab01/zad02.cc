#include <iostream>

int main() {
    int arr[5];

    for (int i = 0; i < 5; i++) {
        std::cout << "Enter " << i + 1 << " num: ";
        std::cin >> arr[i];
    }

    std::cout << "Entered numbers: " << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "Num " << i + 1 << " : " << arr[i] << std::endl;
    }

    return 0;
}
