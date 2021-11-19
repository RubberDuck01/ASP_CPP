#include <iostream>

void function(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            arr[i] = arr[i] + 10;
        } else {
            arr[i] = arr[i] - 10;
        }
    }
}

int main() {
    int array[5] = { -1, 5, -3, 4, 2 };

    std::cout << "Array before function: ";
    for (int i = 0; i < 5; i++) {
        std::cout << array[i] << " ";
    }

    function(array, 5);

    std::cout << std::endl << "Array after function: ";
    for (int i = 0; i < 5; i++) {
        std::cout << array[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}