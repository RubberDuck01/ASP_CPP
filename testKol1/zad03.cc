#include <iostream>

int recFunc(int n) {
    if (n >= 100){

        return 0;
    } else if (n <= 0) {

        return 1;
    } else if (n % 3 == 0 || n % 7 == 0) {

        return n * recFunc(n - 1);
    } else {

        return recFunc(n - 1);
    }
}

int main() {
    std::cout << recFunc(7) << std::endl;

    return 0;
}
