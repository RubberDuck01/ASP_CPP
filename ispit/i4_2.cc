#include <iostream>
#include <vector>
#include <string>
#include <queue>

// klasa podatak:
class Podatak {
public:
    Podatak(int priority) : priority(priority) {
    }

    void pokazi() {
        std::cout << priority << std::endl;
    }

    bool operator < (const Podatak& p) const {
        return priority > p.priority;
    }

    int priority;
    std::string process;
};

// klasa collector:
class Collector {
public:
    void add(Podatak &p) {
        red_za_unistavanje.push(p);
    }

    void unisti() {
        while(red_za_unistavanje.size() > 0) {
            Podatak p = red_za_unistavanje.top();
            p.pokazi();
            red_za_unistavanje.pop();
        }
    }

    // queue:
    std::priority_queue<Podatak, std::vector<Podatak>> red_za_unistavanje;
};

int main() {
    std::priority_queue<Podatak> red;
    red.push(Podatak(1));
    red.push(Podatak(2));
    red.push(Podatak(3));
    red.push(Podatak(4));
    red.push(Podatak(5));
    red.push(Podatak(6));
    red.push(Podatak(7));
    red.push(Podatak(8));
    red.push(Podatak(9));
    red.push(Podatak(10));

    Collector co1;

    while (red.size() > 0) {
        Podatak p = red.top();
        std::cout << "Dodajem: ";
        p.pokazi();
        co1.add(p);
        red.pop();
    }

    co1.unisti();

    return 0;
}
