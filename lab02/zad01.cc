#include <iostream>
#include <chrono>

int main() {
    // 1000 elements
    auto start = std::chrono::high_resolution_clock::now();

    int polje[1000] = { 0 };
    for (int i = 0; i < 1000; i++) {
        polje[i] = i;
    }

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start);

    std::cout << "Vrijeme: " << duration.count() << " microsecs" << std::endl;

    auto start2 = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 1000; i++) {
        polje[i] += 10;
    }

    auto stop2 = std::chrono::high_resolution_clock::now();
    auto duration2 = std::chrono::duration_cast <std::chrono::microseconds> (stop2 - start2);

    std::cout << "Vrijeme za add: " << duration2.count() << " microsecs" << std::endl;

    return 0;
}
