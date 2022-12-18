//
//  main.cpp
//  CONTA_NUMERI_COMPRESI_TRA_H_e_K
//
//  Created by Daniel Viola on 02/12/22.
//
// Scrivere un programma che legga due numeri H e K dalla tastiera, legga poi N numeri (dalla tastiera con N preso in input ) e calcoli quanti dei numeri
// letti sono compresi tra il valore H e K.Stampare quanti sono i numeri compresi tra H e K

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int H, K, N, n, c=0;
    cout << "Inserisci numero H: " << endl;
    cin >> H;
    cout << "Inserisci numero K: " << endl;
    cin >> K;
    cout << "Quanti numeri vuoi inserire? " << endl;
    cin >> N;
    for (int i=0; i<N; i++){
        cout << "Inserisci numero: " << endl;
        cin >> n;
        if (H>c && c<K){
            c++;
        }
    }
    cout << "Numeri compresi tra H e K: " << c << endl;
    return 0;
}
