#include <iostream>
#include <list>
#include <string>

bool shopping(std::list<std::string> &list, std::string item) {
    for (auto it = list.begin(); it != list.end(); ) {
        if (*it == item) {
            return false;
        } else {
            it++;
        }
    }

    list.push_back(item);
    return true;
}

int main() {
    std::list<std::string> myList = { "Coffee", "Petrol", "Beer", "Candy" };

    std::cout << shopping(myList, "Audi_S8");
    std::cout << std::endl;

    for (auto i : myList) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
