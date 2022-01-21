#include <iostream>
#include <chrono>
#include <vector>
#include <algorithm>

void find_naive(std::vector<int> &vector, int x) {
    auto start = std::chrono::high_resolution_clock::now();
    for (auto it : vector) {
        if (it == x) {
            break;
        }
    }
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast <std::chrono::microseconds> (stop - start);

    std::cout << "Trajanje NAIVE: " << duration.count() << std::endl;
}

void find_binary(std::vector<int> &vector, int x) {
    auto start = std::chrono::high_resolution_clock::now();
    std::binary_search(vector.begin(), vector.end(), x);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast <std::chrono::microseconds> (stop - start);

    std::cout << "Trajanje BINARY: " << duration.count() << std::endl;
}

int main() {
    std::vector<int> vect;
    for (int i = 0; i < 1000000; i++) {
        vect.push_back(i + 1);
    }

    find_naive(vect, 1000000);
    find_binary(vect, 1000000);

    return 0;
}
