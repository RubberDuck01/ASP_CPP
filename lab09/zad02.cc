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

// zad02:
void preorder(cvor* c) {
    if (c == NULL) {
        return;
    }

    std::cout << "PREORDER: " << c -> vrijednost << std::endl;
    preorder(c -> lijevo);
    preorder(c -> desno);
}

void inorder(cvor* c) {
    if (c == NULL) {
        return;
    }

    inorder(c -> lijevo);
    std::cout << "INORDER: " << c -> vrijednost << std::endl;
    inorder(c -> desno);
}

void postorder(cvor* c) {
    if (c == NULL) {
        return;
    }

    postorder(c -> lijevo);
    postorder(c -> desno);
    std::cout << "POSTORDER: " << c -> vrijednost << std::endl;
}

int main() {
    cvor* korijen = stvoriCvor(10);
    std::cout << "KORIJEN: " << korijen -> vrijednost << std::endl;
    std::cout << "============\n";

    unesi(korijen, 5);
    unesi(korijen, 2);
    unesi(korijen, 12);
    unesi(korijen, 11);
    unesi(korijen, 7);

    preorder(korijen);
    inorder(korijen);
    postorder(korijen);

    return 0;
}
