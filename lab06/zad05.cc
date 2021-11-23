#include <iostream>
#include <list>
#include <algorithm>

int main() {
    std::list<int> myList;

    for (int i = 0; i < 200; i++) {
        myList.push_back(std::rand() % 100 + 1);
    }

    myList.sort();
    myList.reverse();

    for (int i = 0; i < 5; i++) {
        std::cout << myList.front() << std::endl;
        myList.pop_front();
    }

    return 0;
}
