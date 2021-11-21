#include <iostream>

void showReverse(int n) {
    if (n == 0) {
        return;
    }
    std::cout << n << std::endl;
    showReverse(n - 1);
}

int main() {
    showReverse(7);

    return 0;
}
