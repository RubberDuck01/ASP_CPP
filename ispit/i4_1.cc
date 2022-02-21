#include <iostream>

struct cvor {
    int vrijednost;
    cvor* left;
    cvor* right;
};

cvor* stvoriCvor(int vrijednost) {
    cvor* c = new cvor;
    c -> vrijednost = vrijednost;
    c -> left = nullptr;
    c -> right = nullptr;

    return c;
}

void unesi(cvor* korijen, int vrijednost) {
    if (vrijednost < korijen -> vrijednost) {
        if (korijen -> left == nullptr) {
            cvor* c = stvoriCvor(vrijednost);
            korijen -> left = c;
        } else {
            unesi(korijen -> left, vrijednost);
        }
    } else {
        if (korijen -> right == nullptr) {
            cvor* c = stvoriCvor(vrijednost);
            korijen -> right = c;
        } else {
            unesi(korijen -> right, vrijednost);
        }
    }
}

int main() {
    cvor* korijen = stvoriCvor(10);
    unesi(korijen, 6);
    unesi(korijen, 3);
    unesi(korijen, 16);
    unesi(korijen, 12);
    unesi(korijen, 8);

    std::cout << "Korijen: " << korijen -> vrijednost << std::endl;

    return 0;
}
