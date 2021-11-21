#include <iostream>

int charSum(int n) {
    if (n == 0) {
        return 0;
    }

    return n % 10 + charSum(n / 10);
}

int main() {
    std::cout << charSum(123) << std::endl;

    return 0;
}
