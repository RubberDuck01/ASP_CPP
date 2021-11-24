#include <iostream>
#include <list>

void filtriraj(std::list<int> &list) {
    list.sort();
    list.unique();

    for (auto it = list.begin(); it != list.end(); ) {
        if (*it < 0) {
            list.erase(it);
            it = list.begin();

        } else if (*it > 30) {
            list.erase(it);
            it = list.begin();
        }
        else it++;
    }
}

int main() {
    std::list<int> myList = { 11, 55, 34, -71, 76, 45, 67, 32, -43, 29 };

    for (auto a : myList) {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    filtriraj(myList);

    for (auto a : myList) {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    return 0;
}
