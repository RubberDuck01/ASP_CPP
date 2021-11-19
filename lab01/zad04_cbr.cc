#include <iostream>

void add10 (int *a) {
    if (*a > 0) {
        *a += 10;
    } else {
        *a -= 10;
    }
}

int main() {
    int num = 60;

    std::cout << "Before func: " << num << std::endl;
    add10(&num);
    std::cout << "After func: " << num << std::endl;

    return 0;
}
