#include <iostream>
#include <chrono>

void findValue(int container[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (container[i] == x) {
            break;
        } else {
            continue;
        }
    }
}

int main() {
    auto start = std::chrono::high_resolution_clock::now();
    int *polje = new int[100000000];
    for (int i = 0; i < 100000000; i++) {
        polje[i] = i;
    }

    findValue(polje, 100000000, 99999999);

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast <std::chrono::microseconds> (stop - start);

    std::cout<< "Vrijeme (microsecs): " << duration.count() << std::endl;

    delete [] polje;
    return 0;
}
