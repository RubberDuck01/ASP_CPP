#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

// struktura:
struct Auto {
  std::string make;
  int km;
};

// bubble sort:
void bubble_sort(std::vector<Auto> &vect) {
    int tmp;
    while (true) {
        bool swapp = false;
        for (int i = 0; i < vect.size() - 1; i++) {
            if (vect[i].km > vect[i + 1].km) {
                tmp = vect[i].km;
                vect[i].km = vect[i + 1].km;
                vect[i + 1].km = tmp;
                swapp = true;
            }
        }
        if (!swapp) {
            break;
        }
    }
}

// driver:
int main() {
    // nekoliko auta:
    Auto one = { "Audi S8", 80000 };
    Auto two = { "VW Golf MK5", 209040 };
    Auto three = { "Giulia", 140500 };
    Auto four = { "BMW M2 Comp", 60000 };
    Auto five = { "Benz S63", 90500 };

    // vectori:
    std::vector<Auto> a1 = { one, two, three, four, five };
    std::vector<Auto> a2 = { one, two, three, four, five };

    // pokazi kilometrazu:
    for (int i = 0; i < a1.size(); i++) {
        std::cout << a1[i].make << " (" << a1[i].km << " km)" << std::endl;
    }

    // bubble sortaj i pokazi:
    std::cout << "\nBubble sort:" << std::endl;
    bubble_sort(a2);
    for (int i = 0; i < a2.size(); i++) {
        std::cout << a2[i].make << " (" << a2[i].km << " km)" << std::endl;
    }

    return 0;
}
