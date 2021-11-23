#include <iostream>
#include <list>
#include <forward_list>

int main() {
    std::list<int> list1 = { 1, 2, 3, 4, 5 };
    std::forward_list<int> list2 = { 6, 7, 8, 9, 0 };

    std::cout << "Prvi element list1: " << list1.front() << std::endl;
    std::cout << "Prvi element list2: " << list2.front() << std::endl;

    // popping front elements:
    list1.pop_front();
    list2.pop_front();

    // show both lists:
    std::cout << "std::list (list1): ";
    for (auto a : list1) {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    std::cout << "std::forward_list (list2): ";
    for (auto a : list2) {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    // popping back elements:
    list1.pop_back();
    // list2.pop_back();

    // show both lists yet again:
    std::cout << "std::list (list1): ";
    for (auto a : list1) {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    std::cout << "std::forward_list (list2): ";
    for (auto a : list2) {
        std::cout << a << " ";
    }
    std::cout << std::endl;


    return 0;
}
