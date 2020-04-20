#include <iostream>
#include"penulis.h"
#include"novel.h"
#include"relasi.h"

using namespace std;

int main() {

    ListP LP;
    ListN LN;
    adrP P;
    adrN N;
    adrR R;

    createList(LP);
    createList(LN);

    cout<<"Masukkan nama penulis :"<<endl;
    int i = 1;
    infoP nama;
    while (i <= 4) {
        cin>>nama;
        P = createNewP(nama);
        addP(LP, P);
        i++;
    }

    cout<<"List Penulis :"<<endl;
    showP(LP);

    cout<<"Masukkan judul novel :"<<endl;
    int z = 1;
    infoN judul;
    while (z <= 5) {
        cin >>judul;
        N = createNewN(judul);
        addN(LN, N);
        z++;
    }

    cout<<"List Novel :"<<endl;
    showN(LN);


    cout<<"Relasikan? Skuy."<<endl;
    cout<<"Masukkan nama penulis dan novel yang ingin direlasikan:"<<endl;
    int o = 1;
    while (o <= 6) {
        cout<<"Nama Penulis:";
        cin>>nama;
        P = findP(LP, nama);

        cout<<"Judul Novel:";
        cin>>judul;
        N = findN(LN, judul);

        R = createNewR(N);
        addR(novel(P), R);
        cout<<endl;
        o++;
    }

    cout<<endl<<"Sudah direlasikan."<<endl;
    cout<<"List Penulis"<<endl;
    showP(LP);

    cout<<endl<<"List Novel :"<<endl;
    showN(LN);


    return 0;
}
