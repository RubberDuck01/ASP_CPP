#include <iostream>

struct cvor {
    int vrijednost;
    cvor* lijevo;
    cvor* desno;
};

cvor* stvoriCvor(int vrijednost) {
    cvor* c = new cvor;
    c -> vrijednost = vrijednost;
    c -> lijevo = NULL;
    c -> desno = NULL;

    return c;
}

// zad01:
void unesi(cvor* korijen, int vrijednost) {
    if (vrijednost < korijen -> vrijednost) {
        if (korijen -> lijevo == NULL) {
            cvor* c = stvoriCvor(vrijednost);
            korijen -> lijevo = c;
        } else {
            unesi(korijen -> lijevo, vrijednost);
        }
    } else {
        if (korijen -> desno == NULL) {
            cvor* c = stvoriCvor(vrijednost);
            korijen -> desno = c;
        } else {
            unesi(korijen -> desno, vrijednost);
        }
    }
}

int main() {
    cvor* korijen = stvoriCvor(10);
    std::cout << "KORIJEN: " << korijen -> vrijednost << std::endl;

    return 0;
}
