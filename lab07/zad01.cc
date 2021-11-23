#include <iostream>
#include <string>
#include <stack>
#include <queue>

int main() {
    std::stack<std::string> stack;

    for (int i = 0; i < 5; i++) {
        std::string text;
        std::cout << "Unesi zadatak: ";
        std::cin >> text;

        stack.push(text);
    }

    for (int i = stack.size(); i > 0; i--) {
        std::cout << stack.top() << std::endl;
        stack.pop();
    }

    return 0;
}
