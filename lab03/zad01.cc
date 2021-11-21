#include <iostream>

void show(int n) {
    if (n == 0) {
        return;
    }
    show(n - 1);
    std::cout << n << std::endl;
}

int main() {
    show(7);

    return 0;
}
