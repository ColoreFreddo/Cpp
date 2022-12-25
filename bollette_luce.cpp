//  Created by Daniel Viola

#include <iostream>
using namespace std;
const double kw = 0.07;

//  funzione
int calcola_bolletta(int attuale, int precedente){
    int consumo=0, importo_totale=0, out=0, basso=250, alto=500;
    double quota_fissa =0.0;
    consumo = attuale - precedente;
    importo_totale =  consumo * kw;
    if (consumo < 250){
        quota_fissa = (15/100)*importo_totale;
   }else if (consumo >= 250 && consumo <= 500){
        quota_fissa = (25/100)*importo_totale;
   }else if (consumo > 500){
        quota_fissa = (30/100)*importo_totale;
   }
    out = importo_totale + quota_fissa;
    return out;
}

//  main
int main() {
    setlocale(LC_ALL, "Italian");

//  variabili
    string nome="";
    int lettura_p = 0, lettura_a = 0, out = 0;

//  input & output
    cout << "inserire nome: " << endl;
    cin >> nome;
    cout << "inserire numero lettura precendente: " << endl;
    cin >> lettura_p;
    cout << "inserire numero lettura attuale: " << endl;
    cin >> lettura_a;
    out = calcola_bolletta(lettura_a, lettura_p);

//  output
    cout << "Nome: " << nome << endl;
    cout << "Costo al Kw: " << kw << " euro" << endl;
    cout << "Lettura precedente: " << lettura_p << endl;
    cout << "Lettura attuale: " << lettura_a << endl;
    cout << "Totale da saldare: " << out << " euro" << endl;
    return 0;
}

//  Although Punpun didn’t really want to think about what the point of having dreams that could never come true was… To have dreams and worries that you could talk frankly about… 
//  In a way, that was probably a more fulfilling lifestyle than his own, Punpun admitted. Being cool was merely a paper-thin difference away from being empty.
