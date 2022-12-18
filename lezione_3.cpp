//
//  main.cpp
//  lezione 3
//
//  Created by Daniel Viola on 24/11/22.
// scrivere un programma per simulare una calcolatrice prendere in imput due numeri e scegliere una tra +, -, *, potenza

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Italian");
    double risultato = 0.0, n_1, n_2;
    char op;
    cout << "inserire il primo numero: " << endl;
    cin >> n_1;
    cout << "inserire il secondo numero: " << endl;
    cin >> n_2;
    cout << "inserire il operando: (+, -, *, /, ^)" << endl;
    cin.ignore(INT_MAX,'\n');
    //fflush(stdin);
    op = getchar();
    //cout << op << endl;
    switch (op) {
        case '+':
            risultato=(n_1 + n_2);
            cout << "il risultato è " << risultato << "!";
            break;
        case '-':
            risultato=(n_1 - n_2);
            cout << "il risultato è " << risultato << "!";
            break;
        case '/':
            risultato=(n_1 / n_2);
            cout << "il risultato è " << risultato << "!";
            break;
        case '*':
            risultato=(n_1 * n_2);
            cout << "il risultato è " << risultato << "!";
            break;
        case '^':
            risultato=pow(n_1, n_2);
            cout << "il risultato è " << risultato << "!";
            break;
        default:
            cout<< "errore";
            break;
    }
    return 0;
}
