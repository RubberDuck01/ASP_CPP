#include <iostream>

int recurs(int n, int m, int d) { // n i m su interval; d je broj s kojim dijelim
    int counter = 0;

    if ((n < 0) || (m < 0)) {
        return 0;

    } else {
        for (int i = n; i <= m; i++) {
            if (i % d == 0) {
                std::cout << "Djeljiv: " << i << std::endl;
                counter++;
            }
        }
    }

    std:: cout << "Ukupno: ";

    return counter;
}

int main() {
    int n = 10; // aka n
    int m = 25; // aka m

    int d = 5; // djeljiv s 5

    std::cout << recurs(n, m, d) << std::endl;

    return 0;
}
