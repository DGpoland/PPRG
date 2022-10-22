#include <iostream>
using namespace std;

int main(){
    int pizza, osoby, kawalki, porcja, reszta;

    cout << "Ile osób jest na imprezie?";
    cin >> osoby;

    cout << "Ile pizzy jest na imprezie?";
    cin >> pizza;

    kawalki = pizza * 8;
    porcja = kawalki / osoby;
    reszta = kawalki % osoby;

    cout << "Uczestnicy imprezy dostaną po " << porcja << " kawałków na osobę.\n" ;
    cout << "Gospodarzowi zostanie " << reszta << " kawałków." ;
}