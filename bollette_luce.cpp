//  Created by Daniel Viola

#include <iostream>
using namespace std;
const float kw = 0.07;

//  funzione
float calcola_bolletta(float &attuale, float &precedente){
    float consumo = 0, importo_totale = 0, quota_fissa = 0.0;
    consumo = attuale - precedente;
    importo_totale =  consumo * kw;
    if (consumo < 250){
        importo_totale += (15/100)*importo_totale;
   }else if (consumo >= 250 && consumo <= 500){
        importo_totale += (25/100)*importo_totale;
   }else if (consumo > 500){
        importo_totale += (30/100)*importo_totale;
   }
    return importo_totale;
}

//  main
int main() {
    setlocale(LC_ALL, "Italian");

//  variabili
    string nome="";
    float lettura_p = 0, lettura_a = 0, out = 0;
    int sel = 0;
    while (sel !=3) {
        cout << "---------------------------" << endl;
        cout << "Selezionare azione: " << endl;
        cout << "(1) per inserire dati" << endl;
        cout << "(2) per scontrino bolletta" << endl;
        cout << "(3) per uscire" << endl;
        cout << "---------------------------" << endl;
        cin >> sel;
        switch(sel){
            case 1:

//  input & output
                cout << "inserire nome: " << endl;
                cin >> nome;
                cout << "inserire numero lettura precendente: " << endl;
                cin >> lettura_p;
                cout << "inserire numero lettura attuale: " << endl;
                cin >> lettura_a;
                out = calcola_bolletta(lettura_a, lettura_p);
                break;
            case 2:

//  output
                cout << "Nome: " << nome << endl;
                cout << "Costo al Kw: " << kw << " euro" << endl;
                cout << "Lettura precedente: " << lettura_p << " kw" << endl;
                cout << "Lettura attuale: " << lettura_a << " kw" << endl;
                cout << "Totale da saldare: " << out << " euro" << endl;
                break;
            case 3:
                break;
                default:
                cout << "errore carattere non valido!" << endl;
                break;
        }
    }
    return 0;
}

//  Although Punpun didn’t really want to think about what the point of having dreams that could never come true was… To have dreams and worries that you could talk frankly about… 
//  In a way, that was probably a more fulfilling lifestyle than his own, Punpun admitted. Being cool was merely a paper-thin difference away from being empty.
