#include <iostream>

struct cvor {
    int vrijednost;
    cvor* left;
    cvor* right;
};

cvor* stvoriCvor(int vrijednost) {
    cvor* c = new cvor;
    c -> vrijednost = vrijednost;
    c -> left = NULL;
    c -> right = NULL;

    return c;
}

// zad - complete:
void unesi(cvor* korijen, int vrijednost) {
    if (vrijednost < korijen -> vrijednost) {
        if (korijen -> left == NULL) {
            cvor* c = stvoriCvor(vrijednost);
            korijen -> left = c;
        } else {
            unesi(korijen -> left, vrijednost);
        }
    } else {
        if (korijen -> right == NULL) {
            cvor* c = stvoriCvor(vrijednost);
            korijen -> right = c;
        } else {
            unesi(korijen -> right, vrijednost);
        }
    }
}

// driver:
int main() {
    cvor* korijen = stvoriCvor(10);
    unesi(korijen, 6);
    unesi(korijen, 3);
    unesi(korijen, 16);
    unesi(korijen, 12);
    unesi(korijen, 8);

    std::cout << "Vrijednost korijena: " << korijen -> vrijednost << std::endl;

    return 0;
}
