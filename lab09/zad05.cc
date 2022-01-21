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

// zad03:
int listovi(cvor* c) {
    if (c == NULL) {
        return 0;
    }

    if (c -> lijevo == NULL && c -> desno == NULL) {
        return 1;
    }
    else
        return listovi(c -> lijevo) + listovi(c -> desno);
}

// zad04:
bool pretrazi(cvor* korijen, int x) {
    if (korijen == NULL) {
        return false;
    }
    std::cout << "Vrijednost: " << korijen -> vrijednost << std::endl;

    if (korijen -> vrijednost == x) {
        return true;
    } else if (korijen -> vrijednost > x) {
        pretrazi(korijen -> lijevo, x);
    } else if (korijen -> vrijednost < x) {
        pretrazi(korijen -> desno, x);
    }

}

// zad05:
cvor* min_cvor(cvor* c) {
    if (c != NULL) {
        while (c -> lijevo != NULL) {
            c = c -> lijevo;
        }
    }
    return c;
}

cvor* max_cvor(cvor* c) {
    if (c != NULL) {
        while (c -> desno != NULL) {
            c = c -> desno;
        }
    }
    return c;
}

int main() {
    cvor* korijen = stvoriCvor(10);
    //std::cout << "KORIJEN: " << korijen -> vrijednost << std::endl;
    //std::cout << "============\n";

    unesi(korijen, 5);
    unesi(korijen, 2);
    unesi(korijen, 12);
    unesi(korijen, 11);
    unesi(korijen, 7);

    /*
    // funkcije iz zad02 (copy pasteovan citav kod na ne pisem ispocetka)
    preorder(korijen);
    inorder(korijen);
    postorder(korijen); */

    std::cout << "Broj listova: " << listovi(korijen) << std::endl;

    std::cout << pretrazi(korijen, 12) << std::endl;

    /*
    std::cout << "Min cvor: " << min_cvor(korijen) << std::endl;
    std::cout << "Max cvor: " << max_cvor(korijen) << std::endl; */

    return 0;
}
