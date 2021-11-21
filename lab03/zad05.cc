#include <iostream>

int charNum(int n) {
    if (n == 0) {
        return 0;
    }

    return 1 + charNum(n / 10);
}

int main() {
    std::cout << charNum(6942) << std::endl;

    return 0;
}
