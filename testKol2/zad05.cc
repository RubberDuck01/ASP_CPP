#include <iostream>
#include <vector>
#include <queue>

// napravi klasu papir:
class Papir {
public:
    Papir(int priority, int gustoca) : priority(priority), gustoca(gustoca) {
    }

    void ispisi() {
        std::cout << priority << " (" << gustoca << ")\n";
    }

    bool operator<(const Papir& p) const {
        return priority > p.priority;
    }

    int priority;
    int gustoca;
};

// struktura za usporedbu:
struct usporedi {
    bool operator() (Papir const& p1, Papir const& p2) {
        return p1.gustoca < p2.gustoca;
    }
};

// klasa kamion:
class Kamion {
public:
    // ubacuje papir:
    void ubaci(Papir &p) {
        recikliranje_prema_gustoci.push(p);
    }

    // akcija:
    void recikliraj() {
        while (recikliranje_prema_gustoci.size() > 0) {
            Papir p = recikliranje_prema_gustoci.top();
            p.ispisi();
            recikliranje_prema_gustoci.pop();
        }
    }

    // priority queue:
    std::priority_queue<Papir, std::vector<Papir>, usporedi> recikliranje_prema_gustoci;
};

// driver:
int main() {
    // napravi red i pushaj nesto:
    std::priority_queue<Papir> red;
    red.push(Papir(1, 100));
    red.push(Papir(5, 250));
    red.push(Papir(7, 600));
    red.push(Papir(6, 300));
    red.push(Papir(4, 420));
    red.push(Papir(2, 220));
    red.push(Papir(8, 450));
    red.push(Papir(3, 340));

    // napravi kamion i ubaci:
    Kamion mercedes;

    while (red.size() > 0) {
        Papir p = red.top();
        std::cout << "Ubacujem: ";
        p.ispisi();
        mercedes.ubaci(p);
        red.pop();
    }

    mercedes.recikliraj();

    return 0;
}
