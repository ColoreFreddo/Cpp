//
//  main.cpp
//  SOMMA_fno_A__100
//
//  Created by Daniel Viola on 02/12/22.
//
//  Scrivere un programma che legga una sequenza di valori numerici dalla tastiera fino a che la loro somma è minore di 100.
//  Stampare la somma ottenuta e quanti sono i numeri letti da tastiera.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int ni=0, s=0;
    int c=0;
    while (s<100){
        cout << "Inserire nemero da sommare: ";
        cin >> ni;
        s=s+ni;
        c++;
    }
    cout << "Totale numeri inseriti: " << c << endl;
    cout << "Ammontare totale: " << ni << endl;
    return 0;
}
