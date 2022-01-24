#include <iostream>
#include <algorithm>
#include <vector>

// struktura:
struct Osoba {
    std::string ime;
    std::string prezime;
    int poeni;
};

// funkcija za ispis rezultata:
void pokazi(std::vector<Osoba>& osobe) {
    for (Osoba o : osobe) {
        std::cout << o.prezime << ", " << o.ime << " = " << o.poeni << std::endl;
    }
    // std::cout << std::endl;
}

// usporedba:
bool compare (const Osoba &o1, const Osoba &o2) {
    return o1.poeni > o2.poeni;
}

// driver:
int main() {
    std::vector<Osoba> people;
    Osoba per1 { "Firstname", "Lastname", 47 };
    people.push_back(per1);
    Osoba per2 { "Linus", "Torvalds", 76 };
    people.push_back(per2);
    Osoba per3 { "Richard", "Stallman", 83 };
    people.push_back(per3);

    // sort:
    std::sort(people.begin(), people.end(), compare);

    // pokazi:
    pokazi(people);

    return 0;
}
