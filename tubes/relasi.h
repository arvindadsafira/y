#ifndef RELASI_H_INCLUDED
#define RELASI_H_INCLUDED
#include<iostream>
#define first(L) L.first
#define info(P) P->info
#define next(P) P->next
#include"relasi.h"
#include"novel.h"

using namespace std;
typedef struct relasi *adrR;

struct relasi {
    adrN info;
    adrR next;
};

struct ListR {
    adrR first;
};

void createList(ListR &L);
adrR createNewR(adrN N);
void addR(ListR &L, adrR P);
adrR findR(ListR L, adrN novel);
void showR(ListR L);

#endif // RELASI_H_INCLUDED
