#include <iostream> // alpha and omega
#include <map> // za 2
#include <vector> // za 3
#include <algorithm> // za 4

// zad01 - fibonacci (rekurzija):
int fib1(int n) {
    if (n <= 2) {
        return 1;
    }

    return fib1(n - 1) + fib1(n - 2);
}

// zad02 - fibonacci (rec + mem):
long long fib2(int n, std::map<int, long long> &memo) {
    if (n <= 2) {
        return 1;
    }

    auto element = memo.find(n);
    if (element == memo.end()) {
        memo[n] = fib2(n - 1, memo) + fib2(n - 2, memo);
    }
    return memo[n];
}

// zad03 - fibonacci (bottom-up):
long long fib3(long long n) {
    std::vector<long long> vf(n + 1, 0);
    vf[1] = 1;

    for (long long i = 2; i <= n; i++) {
        vf[i] = vf[i - 1] + vf[i - 2];
    }

    return vf[n];
}

// zad04 - novcanice i kovanice:
int money(int n, std::vector<int> coins) {
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
    std::map<int, long long> myMap; // treba za zad02
    std::vector<int> myVector = { 50, 20, 10, 5, 1 }; // zad04

    // pozivanje svih funkcija:
    std::cout << "Zad01: " << fib1(9) << std::endl;
    std::cout << "Zad02: " << fib2(8, myMap) << std::endl;
    std::cout << "Zad03: " << fib3(7) << std::endl;
    std::cout << "Zad04: " << money(32, myVector) << std::endl;

    return 0;
}
