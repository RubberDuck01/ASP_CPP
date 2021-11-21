#include <iostream>

int sumEven(int n) {
    if (n <= 0) {
        return 0;
    }

    return n * 2 + sumEven(n - 1);
}

int main() {
    std::cout << sumEven(8) << std::endl;

    return 0;
}
