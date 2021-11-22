#include <iostream>
#include <vector>
#include <string>

struct Osoba {
    std::string ime;
    std::string prezime;
    std::string broj;
};

class Imenik {
public:
    void unos(Osoba os) {
        osoba.push_back(os);
    }

Osoba findBroj(std::string broj) {
    Osoba os;
    for (auto it = osoba.begin(); it != osoba.end();) {
        if (it -> broj == broj) {
            os.ime = it -> ime;
            os.prezime = it -> prezime;
            os.broj = it -> broj;

            return os;
        }
        it++;
    }
    return os;
}

Osoba searchImePrezime(std::string ime, std::string prezime) {
    Osoba os;
    for (auto it = osoba.begin(); it != osoba.end();) {
        if (it -> ime == ime && it -> prezime == prezime) {
            os.ime = it -> ime;
            os.prezime = it -> prezime;
            os.broj = it -> broj;

            return os;
        }
        it++;
    }
    return os;
}

void pokazi() {
    Osoba osobe;
    for (auto it = osoba.begin(); it != osoba.end();) {
        osobe.ime = it -> ime;
        osobe.prezime = it -> prezime;
        osobe.broj = it -> broj;

        std::cout << osobe.ime << " " << osobe.prezime << " (" << osobe.broj << ")" << std::endl;
        it++;
    }
}

void totalEntry() {
    std::cout << "Ukupno kontakata: " << osoba.size() << std::endl;
}

void delAll() {
    osoba.clear();
}

void delName(std::string ime) {
    for (auto it = osoba.begin(); it != osoba.end();) {
        if (it -> ime == ime) {
            osoba.erase(it);
        }
        it++;
    }
}

private:
std::vector<Osoba> osoba;
};

int main() {
    Osoba dragan = { "Dragan", "Draganovic", "1691" };
    Osoba ivana = { "Ivana", "Ivankovic", "2012"};
    Osoba petra = { "Petra", "Petric", "0173"};

    Imenik imenik;
    imenik.unos(dragan);
    imenik.unos(ivana);
    imenik.unos(petra);

    std::cout << "IMENIK" << std::endl;
    
    std::cout << "Trazi po broju:" << std::endl;
    Osoba trazi = imenik.findBroj("2012");
    std::cout << trazi.ime << " " << trazi.prezime << " (" << trazi.broj << ")" << std::endl;

    std::cout << "Trazi po imenu i prezimenu:" << std::endl;
    trazi = imenik.searchImePrezime("Petra", "Petric");
    std::cout << trazi.ime << " " << trazi.prezime << " (" << trazi.broj << ")" << std::endl;

    std::cout << "\n" << "Pokazivanje citavog imenika:" << std::endl;
    imenik.pokazi();
    imenik.totalEntry();

    std::cout << "\n" << "Brisanje po imenu:" << std::endl;
    imenik.delName("Dragan");
    imenik.pokazi();
    imenik.totalEntry();

    std::cout << "\n" << "Brisanje svih kontakata (delAll): " << std::endl;
    imenik.delAll();
    imenik.pokazi();
    imenik.totalEntry();

    return 0;
}
