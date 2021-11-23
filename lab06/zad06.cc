#include <iostream>
#include <list>
#include <algorithm>

bool even(const int &value) {
    return (((value % 2) == 0) && (value < 50));
}

int main() {
    std::list<int> myList;

    for (int i = 0; i < 10; i++) {
        myList.push_back(std::rand() % 100 + 1);
    }

    for (auto a : myList) {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    std::cout << "Size: " << myList.size() << std::endl;

    myList.sort();
    myList.reverse();

    std::cout << "myList: ";
    for (auto a : myList) {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    for (auto it = myList.begin(); it != myList.end(); ) {
        if ((*it % 2 == 0) && (*it > 50)) {
            std::cout << "EVEN!" << *it << std::endl;
            std::list<int> :: iterator temp = myList.erase(it);
            it = temp;
        } else {
            it++;
        }
    }

    myList.push_back(2);
    myList.push_back(4);

    for (auto a : myList) {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    myList.remove_if(even);

    std::cout << "\nSize: " << myList.size() << std::endl;
    std::cout << "myList: ";
    for (auto a : myList) {
        std::cout << a << " ";
    }
    std::cout << std::endl;

    return 0;
}
