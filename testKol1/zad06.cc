#include <iostream>
#include <string>
#include <vector>

struct Klub{
    std::string Ime;
    std::string Prezime;
    int Broj;
};

void unos(Klub member1, std::vector<Klub> &clan) {
    clan.push_back(member1);
}

Klub findMember(int Broj, std::vector<Klub> &clan) {
    Klub a;

    for (auto it = clan.begin(); it != clan.end(); ) {
        if (it -> Broj == Broj) {
            a.Ime = it -> Ime;
            a.Prezime = it -> Prezime;
            a.Broj = it -> Broj;
            return a;
        }
        it++;
    }
    return a;
}

void show(std::vector<Klub> &clan) {
    Klub members;

    for (auto it = clan.begin(); it != clan.end(); ) {
        members.Ime = it -> Ime;
        members.Prezime = it -> Prezime;
        members.Broj = it -> Broj;

        std::cout << members.Ime << " " << members.Prezime << " (" << members.Broj << ")" << std::endl;

        it++;
    }
}

int main() {
    std::vector<Klub> clan;

    Klub Linus = { "Linus", "Torvalds", 123456 };
    Klub Steve = { "Steve", "Jobs", 654321 };
    Klub Billy = { "Bill", "Gates", 987789 };
    Klub Zoki = { "Crveni", "Zoki", 666666 };

    unos(Linus, clan);
    unos(Steve, clan);
    unos(Billy, clan);
    unos(Zoki, clan);

    show(clan);

    std::cout << std::endl;

    Klub find = findMember(123456, clan);
    std::cout << find.Ime << " " << find.Prezime << " (" << find.Broj << ")" << std::endl;

    return 0;
}
