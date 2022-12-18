//  Created by Daniel Viola

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Italian");
    double pezzi=0, prezzo=0, tot=0, sconto=0;
    cout << "Inserire numero prodotti: "<<endl;
    cin >> pezzi;
    for (int i; i<= pezzi; i++)
    {
        cout << "Inserire prezzo prodotto " << i << ":"<<endl;
        cin >> prezzo;
        tot = tot + prezzo;
        prezzo = 0;
    }
    sconto = (tot*25)/100;
    if (tot > 125 || sconto > 300)
    {
        sconto=(tot*15)/100;
        tot=tot-sconto;
        cout << "il totale dello sconto è  " << sconto << endl;
        cout << "il numero di ariticoli è " << pezzi << endl;
        cout << "il totale scontato è " << tot << endl;
    }else{
        cout << "il totale è " << tot << endl;
        cout << "il numero di ariticoli è " << pezzi << endl;
    }
    return 0;
}
