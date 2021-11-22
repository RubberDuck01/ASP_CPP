#include <iostream>
#include <vector>

void funcVector(std::vector<int> &vector) {
    if (vector.empty()) {
        return;
    } else {
        int n;
        while(1) {
            std::cout << "Unesi neku vrijednost: ";
            std::cin >> n;

            if (n == -1) {
                return;
            }

            if (n == vector.back()) {
                vector.pop_back();
                while (! vector.empty() && vector.back() <= n) {
                    vector.pop_back();
                }

                break;
            }

            vector.push_back(n);
        }
    }
}

int main() {
    std::vector<int> vect = { 12, 8, 4, 5, 6, 3, 4, 3, 5 };
    funcVector(vect);

    for (int i : vect) {
        std::cout << i << std::endl;
    }

    return 0;
}
