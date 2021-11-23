#include <iostream>
#include <list>

int main() {
    std::list<int> list1 = { 1, 4, 9, 45, 4, 5, 67, 4, 2, 7 };

    std::cout << "List size: " << list1.size() << std::endl;

    // sort and display:
    list1.sort();
    for (auto a : list1) {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    // removes the nums that appear more than once
    list1.unique();
    for (auto a : list1) {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    std::cout << "Size after unique: " << list1.size() << std::endl;

    return 0;
}
