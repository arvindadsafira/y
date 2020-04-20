#include<iostream>
#include"penulis.h"


void createList(ListP &L) {
    first(L) = NULL;
}

adrP createNewP(infoP nama) {
    adrP P = new penulis;
    info(P) = nama;
    next(P) = NULL;
    return P;
}

void addP(ListP &L, adrP P) {
    if (first(L) != NULL) {
        adrP Q = first(L);
        while(next(Q) != NULL) {
            Q = next(Q);
        }
        next(Q) = P;
        next(P) = NULL;
    } else {
        first(L) = P;
        next(P) = NULL;
    }
}


adrP findP(ListP L, infoP nama) {
    if (first(L) != NULL) {
        adrP P = first(L);
        do {
            if (info(P) != nama) {
                P = next(P);
            } else {
                return P;
            }
        } while (P != NULL);
    } else {
        return NULL;
    }
}

void showP(ListP L) {
    if (first(L) != NULL) {
        adrP P = first(L);
        do {
            cout<<info(P)<<endl;
            showR(novel(P));
            P = next(P);
        } while (P != NULL);
    } else {
        cout<<"List kosong."<<endl;
    }
}

