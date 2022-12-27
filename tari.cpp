//  Created by Daniel Viola

#include <iostream>
using namespace std;

const float tv1 = 1.23764;
const float tv2 = 1.45422;
const float tv3 = 1.62440;
const float tvb = 0.34758;

float calcola_famiglia(int n, float mq){
    float tf = 0;
    switch (n){
        case 1:
            tf = 49.92488 + ( tv1 * mq );
            break;
        case 2:
            tf = 134.17313 + (tv2 * mq);
            break;
        case 3:
            tf = 160.38370 + (tv3 * mq);
            break;
    }
    return tf += tf * (5/100);
}

float calcola_abitazione(int n, float mq){
    float tf = 0;
    switch (n){
        case 1:
            tf = 39.93990 + (tv1 * mq);
            break;
        case 2:
            tf = 107.33850 + (tv2 * mq);
            break;
        case 3:
            tf = 128.30696 + (tv3 * mq);
            break;
    }
    return tf += tf * (5/100);
}

float calcola_box(float mq){
    float tf = 0;
    tf = 0.34758 + (tvb * mq);
    return tf += tf * (5/100);
}

int main() {
    setlocale(LC_ALL, "Italian");
//  menu
    int cat = 0, alloggi = 0, c_fam = 0, sel = 0;
    float mq=0, out_fam = 0, out_all = 0, out_b = 0;
    while (sel !=3){
        cout << "-----------------" << endl; 
        cout << "Inserire opzione:" << endl;
        cout << "(1) Inserire Dati" << endl;
        cout << "(2) Stampare Tari" << endl;
        cout << "(3) Esci" << endl; 
        cout << "-----------------" << endl; 
        cin >> sel;
        switch (sel){
            case 1:
                 cout << "--------------------------" << endl; 
                 cout << "Inserire numero categoria:" << endl; 
                 cout << "(1) Abitazione in uso" << endl; 
                 cout << "(2) Alloggi a disposizione" << endl; 
                 cout << "(4) Box privati" << endl;
                 cout << "--------------------------" << endl;
                 cin >> cat; 
                    switch (cat){
                        case 1:
                            cout << "Inserire metri quadrati abitazione: "<< endl;
                            cin >> mq;
                            cout << "------------------------" << endl; 
                            cout << "(1) Un componente" << endl; 
                            cout << "(2) Due componenti" << endl; 
                            cout << "(3) Tre o più componenti" << endl; 
                            cout << "------------------------" << endl; 
                            cin >> c_fam;
                            out_fam = calcola_famiglia(c_fam, mq);
                            break;
                        case 2:
                            cout << "Inserire metri quadrati abitazione: " << endl;
                            cin >> mq;
                            cout << "------------------------------" << endl; 
                            cout << "(1) Un alloggio a disposizione" << endl; 
                            cout << "(2) Due alloggi a disposizione" << endl; 
                            cout << "(3) Tre alloggi a disposizione" << endl; 
                            cout << "------------------------------" << endl; 
                            cin >> alloggi;
                            out_all = calcola_abitazione(alloggi,mq);
                            break;
                        case 4:
                            cout << "Inserire metri quadrati abitazione: ";
                            cin >> mq;
                            out_b = calcola_box(mq);
                            break;
                        default:
                            cout << "Errore carattere non valido!" << endl;
                            break;
                                }
                    break;
            case 2:
                 cout << "-----------------------------------------" << endl; 
                 cout << "Totale da pagare Abitazione in uso: " << out_fam << " euro"<< endl; 
                 cout << "Totale da pagare Alloggi a disposizione: " << out_all << " euro"<< endl; 
                 cout << "Totale da pagare Box: " << out_b << " euro"<< endl; 
                 cout << "-----------------------------------------" << endl; 
                 break;
            case 3:
                 break;
            default:
                 cout << "Errore Carattere non valido!" << endl;
                 return 0;
      }
    }
    return 0;
}

//But once you grow old, you become afraid of even losing things without any value.
