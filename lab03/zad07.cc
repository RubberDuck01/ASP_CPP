#include <iostream>

void showElements(int array[], int n) {
    if (n > 0) {
        showElements(array, n - 1);
        std::cout << array[n - 1] << " ";
    }
}

int main() {
    int array[10] = { 1, 8, -5, 4, 11, 65, -92, 76, -4, 10 };
    showElements(array, 10);
    std::cout << std::endl;

    return 0;
}
