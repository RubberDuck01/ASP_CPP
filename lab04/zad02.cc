#include <iostream>
#include <array>

int count(int polje[], int n) {
    if (n > 0) {
        if (polje[n - 1] >= 0) {
            return 1 + count(polje, n - 1);
        } else {
            return count(polje, n - 1);
        }
    }

    return 0;
}

int main() {
    int array[5] = { 5, 3, -6, -4, 5 };
    int poz = count(array, 5);

    std::cout << "Pozitivni u polju: \n" << poz << std::endl;

    return 0;
}
