#include <iostream>

int zeroIt(int array[], int n, int x) {
    if (n > 0) {
        if (array[n - 1] == x) {
            array[n - 1] = 0;
            return zeroIt(array, n - 1, x);
        } else {
            return zeroIt(array, n - 1, x);
        }
    }
}

int main() {
    int array[5] = { 1, 2, 3, 4, 5 };

    std::cout << "Before: ";
    for (int i = 0; i < 5; i++) {
        std::cout << array[i] << " ";
    }

    std::cout << "\nAfter: ";
    std::cout << zeroIt(array, 4, 3);

    return 0;
}
