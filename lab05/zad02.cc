#include <iostream>
#include <vector>

int main() {
    std::vector<int> vect;

    vect.insert(vect.begin(), 1000, 1);
    std::cout << "Prvi insert\n";
    std::cout << "Size: " << vect.size() << std::endl;
    std::cout << "Capacity: " << vect.capacity() << std::endl;
    std::cout << "Max Size: " << vect.max_size() << std::endl;

    // ubacivanje 1 elementa pomocu push_back
    vect.push_back(1);
    std::cout << "\nPush back\n";
    std::cout << "Size: " << vect.size() << std::endl;
    std::cout << "Capacity: " << vect.capacity() << std::endl;
    std::cout << "Max Size: " << vect.max_size() << std::endl;

    // insertanje jos 1000 elemenata
    vect.insert(vect.begin(), 1000, 1);
    std::cout << "\nDrugi insert\n";
    std::cout << "Size: " << vect.size() << std::endl;
    std::cout << "Capacity: " << vect.capacity() << std::endl;
    std::cout << "Max Size: " << vect.max_size() << std::endl;

    return 0;
}
