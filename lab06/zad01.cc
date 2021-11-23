#include <iostream>
#include <list>
#include <forward_list>

int main() {
    std::forward_list<int> forwardList = { 1, 2, 3, 4, 5 };
    std::list<int> basicList = { -5, -4, -3, -2, -1 };

    // display forwardList:
    for (auto x : forwardList) {
        std::cout << x << " ";
    }

    std::cout << std::endl;

    // display basicList:
    for (auto y : basicList) {
        std::cout << y << " ";
    }

    std::cout << std::endl;

    return 0;
}
