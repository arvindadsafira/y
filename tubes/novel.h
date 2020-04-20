#ifndef NOVEL_H_INCLUDED
#define NOVEL_H_INCLUDED
#define first(L) L.first
#define info(P) P->info
#define next(P) P->next
#define firstR(Q) Q->firstR

using namespace std;

typedef string infoN;
typedef struct novel *adrN;

struct novel {
    infoN info;
    adrN next;
};

struct ListN {
    adrN first;
};

void createList(ListN &L);
adrN createNewN(infoN judul);
void addN(ListN &L, adrN P);
adrN findN(ListN L, infoN judul);
void showN(ListN L);


#endif // NOVEL_H_INCLUDED
