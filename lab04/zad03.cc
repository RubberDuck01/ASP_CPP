#include <iostream>
#include <string>

struct Osoba {
    std::string Ime;
    std::string Prezime;
    int OIB;
};

int main() {
    Osoba person;
    person.Ime = "Linus";
    person.Prezime = "Torvalds";
    person.OIB = 123456789;

    std::cout << "Ime: " << person.Ime << std::endl;
    std::cout << "Prezime: " << person.Prezime << std::endl;
    std::cout << "OIB: " << person.OIB << std::endl;

    return 0;
}
