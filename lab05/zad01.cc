#include <iostream>
#include <vector>

int main() {
    std::vector<int> vect;
    int n;

    for (int i = 0; i < 5; i++) {
        std::cout << "Unesi vrijednost: ";
        std::cin >> n;
        vect.push_back(n);
    }

    for (int e : vect) {
        std::cout << e << std::endl;
    }

    return 0;
}
