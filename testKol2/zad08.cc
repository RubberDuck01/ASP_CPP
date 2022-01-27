#include <iostream>
#include <map>
#include <algorithm> // ??

// fibonacci - dinamicko programiranje (rec + mem):
long long fib(int n, std::map<int, long long> &memo) {
    if (n <= 2) {
        return 1;
    }

    auto element = memo.find(n);
    if (element == memo.end()) {
        memo[n] = fib(n - 1, memo) + fib(n - 2, memo);
    }

    return memo[n];
}

// driver:
int main() {
    std::map<int, long long> myMap;

    // primjer - 33:
    std::cout << "Fibonacci dinamicki: " << fib(33, myMap) << std::endl;

    return 0;
}
