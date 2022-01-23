#include <iostream>
#include <queue>

// prikazivanje:
void showPriority(std::priority_queue<int> pq) {
    std::priority_queue<int> prqu = pq;

    while (!prqu.empty()) {
        std::cout << "\t" << prqu.top();
        prqu.pop();
    }

    std::cout << std::endl;
}


// driver:
int main() {
    std::priority_queue<int> queue;

    // vanilla elementi:
    queue.push(7);
    queue.push(3);
    queue.push(12);
    queue.push(8);
    queue.push(9);
    queue.push(4);
    queue.push(6);
    queue.push(2);

    // dodatni elementi:
    queue.push(5);
    queue.push(13);
    queue.push(11);

    // pokazi elemente:
    std::cout << "Prioriteti:\n";
    showPriority(queue);

    // stuff:
    std::cout << "Size: " << queue.size() << std::endl;
    std::cout << "Top: " << queue.top() << std::endl;
    std::cout << "\nPop (x2):" << std::endl;
    queue.pop(); // del 13
    queue.pop(); // del 12
    showPriority(queue);

    return 0;
}
