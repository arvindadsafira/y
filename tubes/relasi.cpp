#include<iostream>
#include"relasi.h"
#include"novel.h"

void createList(ListR &L) {
    first(L) = NULL;
}

adrR createNewR(adrN N) {
    adrR P = new relasi;
    info(P) = N;
    next(P) = NULL;
    return P;
}

void addR(ListR &L, adrR P) {
    next(P) = first(L);
    first(L) = P;
}


adrR findR(ListR L, adrN N) {
    if (first(L) != NULL) {
        adrR P = first(L);
        while (P != NULL) {
            if (info(P) != N) {
                P = next(P);
            } else {
                return P;
            }
        }
    } else {
        return NULL;
    }
}

void showR(ListR L) {
    adrR P = first(L);
    while(P != NULL) {
        cout << ">" << info(info(P)) << endl;
        P = next(P);
    }
}

