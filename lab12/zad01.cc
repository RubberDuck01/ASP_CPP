#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> vect1 = { 7, 6, 5, 3, 9, 2, 1, 0, 8, 4 };
    std::vector<int> vect2 = { 15, 13, 11, 17, 12, 16, 10, 14, 19, 18 };
    std::vector<int>::iterator ps;

    // sortiraj vect1 silazno:
    std::cout << "Silazno:\n";
    std::sort(vect1.begin(), vect1.end());
    std::reverse(vect1.begin(), vect1.end());
    for (int i: vect1) {
        std::cout << i << " ";
    }

    // sortiraj vect1 uzlazno:
    std::cout << "\nUzlazno:\n";
    std::sort(vect1.begin(), vect1.end());
    for (int i: vect1) {
        std::cout << i << " ";
    }

    // sortiraj vect2:
    std::cout << "\nSort vect2:\n";
    std::partial_sort(vect2.begin(), vect2.begin() + 5, vect2.end());

    // pokazi partial sort:
    for (ps = vect2.begin(); ps != vect2.end(); ps++) {
        std::cout << *ps << " ";
    }

    std::cout << std::endl;

    return 0;
}
