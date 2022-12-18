//
//  main.cpp
//  CONTA_NUMERI_MAGGIORI_di_K
//
//  Created by Daniel Viola on 02/12/22.
//
//  Scrivere un programma che dato un numero K preso in input dalla tastiera, legga n numeri (dalla
//  tastiera con N preso in input ) e calcoli quanti numeri
//  letti sono > K e la loro somma.Stampare la somma e quanti sono i numeri > k

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int K, n=0, N, c=0;
    cout << "Quanti numeri vuoi inserire: " << endl;
    cin >> K;
    for (int i=0;i<K;i++) {
        cout << "Inserisci il numero: " << endl;
        cin >> N;
        c=c+N;
        if (N>K){
            n++;
        }
    }
    cout << "Somma dei numeri inseriti: " << c << endl;
    cout << "Numeri maggiori di K: " << K <<endl;
    return 0;
}
