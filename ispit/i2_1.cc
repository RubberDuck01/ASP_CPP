#include <iostream>

int recursFunc(int n) {
    if (n > 0) {
        if ((n % 3 == 0) || (n % 7 == 0)) {
            std::cout << n << std::endl;
            return n * recursFunc(n + 1);

        } else if (n > 100) {
            return 0;
        }
    }

    return recursFunc(n + 1);
}

int main() {
    std::cout << recursFunc(76);
    std::cout << std::endl;

    return 0;
}
