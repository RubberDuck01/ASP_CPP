#include <iostream>
#include <algorithm>
#include <vector>

int vrati(int n, std::vector<int> coins) {
    std::sort(coins.begin(), coins.end(), std::greater<int>());
    int counter = 0;

    for (int i = 0; i < coins.size(); i++) {
        while (coins[i] <= n) {
            n -= coins[i];
            counter++;
        }
    }

    return counter;
}

// driver:
int main() {
    // vector - vrijednosti su novcanice i kovanice na raspolaganju:
    std::vector<int> myVector = { 70, 22, 5, 1 };

    // pozivanje (n = 140):
    std::cout << "Broj novcanica: " << vrati(140, myVector) << std::endl;

    return 0;
}
