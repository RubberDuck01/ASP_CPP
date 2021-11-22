#include <iostream>
#include <vector>

int main() {
    std::vector<int> vect;

    vect.insert(vect.begin(), 5000, 10);
    vect.insert(vect.begin() + 2500, 25, 11);

    for (auto it = vect.begin(); it != vect.end(); it++) {
        std::cout << *it << std::endl;
    }

    return 0;
}
