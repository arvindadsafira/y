#ifndef PENULIS_H_INCLUDED
#define PENULIS_H_INCLUDED
#define first(L) L.first
#define info(P) P->info
#define next(P) P->next
#define novel(P) P->novel
#include"relasi.h"

using namespace std;

typedef string infoP;
typedef struct penulis *adrP;

struct penulis {
    infoP info;
    adrP next;
    ListR novel;
};

struct ListP {
    adrP first;
};

void createList(ListP &L);
adrP createNewP(infoP judul);
void addP(ListP &L, adrP P);
adrP findP(ListP L, infoP judul);
void showP(ListP L);


#endif // PENULIS_H_INCLUDED
