//
//  main.cpp
//  cicli
//
//  Created by Daniel Viola on 24/11/22.
// scrivere un programma che prende n numeri in input e li somma e termina quando l'utente inserisce il valore 0

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Italian");
    double in_1=1, in_2=0;
    while(in_1 != 0){
        fflush(stdin);
        cout << "inserisci numero da sommare: " << endl;
        cin >> in_1;
        in_2 = in_1 + in_2;
        cout << "risultato: "<< in_2<<endl;
    }
    return 0;
}
