#include <iostream>

void recursFunc(int array[], int n) {
    if (n > 0) {
        if (array[n - 1] % 2 == 0 && array[n - 1] >= 0) {
            recursFunc(array, n - 1);
            std::cout << array[n - 1] << " ";

        } else  if (array[n - 1] <= 0) {
            array[n - 1] = 0;
            recursFunc(array, n - 1);
            std::cout << array[n - 1] << " ";

        } else {
            recursFunc(array, n - 1);
        }
    }

}

int main() {
    int array1[5] = { 1, -2, 3, -4, 5 };
    recursFunc(array1, 5);

    return 0;
}
