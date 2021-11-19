#include <iostream>

int main() {
    int num = 0;
    int sum = 0;

    std::cout << "Enter num ( > 0): ";
    std::cin >> num;

    if (num > 0) {
        for (int i = 0; i <= num * 2; i += 2) {
            sum = sum + i;
        }
        std::cout << "SUM: " << sum << std::endl;
        std::cout << "AVERAGE for " << num << " is: " << sum / num << std::endl;
    } else {
        std::cout << "NUmber is not greater than 0!" << std::endl;
        return 0;
    }

    return 0;
}
