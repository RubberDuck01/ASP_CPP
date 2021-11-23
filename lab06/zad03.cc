#include <iostream>
#include <list>
#include <chrono>

int main() {
    std::list<int> mainList;

    // timer 1 start
    auto start = std::chrono::high_resolution_clock::now();

    // insert at start:
    mainList.insert(mainList.begin(), 10000, 1);

    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast <std::chrono::microseconds> (stop - start);
    std::cout << "Time 1 (microsecs): " << duration.count() << std::endl;

    // timer 2 start
    auto start2 = std::chrono::high_resolution_clock::now();

    // insert at end:
    mainList.insert(mainList.begin(), 10000, 2);
    mainList.insert(mainList.end(), 10000, 3);

    auto stop2 = std::chrono::high_resolution_clock::now();
    auto duration2 = std::chrono::duration_cast <std::chrono::microseconds> (stop - start);
    std::cout << "Time 2 (microsecs): " << duration2.count() << std::endl;

    // timer 3 start
    auto start3 = std::chrono::high_resolution_clock::now();

    // insert at middle:
    std::list<int> :: iterator it = mainList.begin();
    std::advance(it, mainList.size() / 2);
    mainList.insert(it, 10000, 4);

    auto stop3 = std::chrono::high_resolution_clock::now();
    auto duration3 = std::chrono::duration_cast <std::chrono::microseconds> (stop2 - start2);
    std::cout << "Time 3 (microsecs): " << duration3.count() << std::endl;

    return 0;
}
