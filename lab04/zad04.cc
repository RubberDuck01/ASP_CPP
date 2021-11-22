#include <iostream>
#include <string>

struct Osoba {
    std::string Ime;
    std::string Prezime;
    int OIB;
};

void changeName(std::string *Ime) {
    *Ime = "Steve"; // pointer
}

void changeLastname(std::string *Prezime) {
    *Prezime = "Jobs";
}

void changeOIB(int *OIB) {
    *OIB = 987654321;
}

int main() {
    Osoba person;
    person.Ime = "Linus";
    person.Prezime = "Torvalds";
    person.OIB = 123456789;

    changeName(&person.Ime); // ref
    changeLastname(&person.Prezime);
    changeOIB(&person.OIB);

    std::cout << "Ime: " << person.Ime << std::endl;
    std::cout << "Prezime: " << person.Prezime << std::endl;
    std::cout << "OIB: " << person.OIB << std::endl;

    return 0;
}
