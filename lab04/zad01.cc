#include <iostream>
#include <array>

int funcSum(int array[], int x, int n) {
    if (n > 0) {
        if (array[n - 1] == x) {
            return array[n - 1] + funcSum(array, x, n - 1);
        } else {
            return funcSum(array, x, n - 1);
        }
    }

    return 0;
}

int main() {
    int array[5] = { 5, 3, -6, -4, 5 };

    std::cout << funcSum(array, 5, 5) << std::endl;

    return 0;
}
