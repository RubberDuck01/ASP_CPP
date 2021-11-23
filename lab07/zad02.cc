#include <iostream>
#include <string>
#include <stack>
#include <queue>

int main() {
    std::queue<std::string> queue;

    for (int i = 0; i < 5; i++) {
        std::string text;
        std::cout << "Unesi zadatak: ";
        std::cin >> text;
        queue.push(text);
    }

    for (int i = queue.size(); i > 0; i--) {
        std::cout << queue.front() << std::endl;
        queue.pop();
    }

    return 0;
}
