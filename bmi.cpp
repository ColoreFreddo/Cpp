//  Created by Daniel Viola

#include <iostream>
using namespace std;

float bmi_it(float peso, float altezza){
    return peso;
}

float bmi_en(float peso, float altezza){
    return peso;
}

int main() {
    setlocale(LC_ALL, "Italian");
    int sel= 0;
    float peso_it = 0, peso_en = 0, altezza_it = 0, altezza_en = 0, out_it = 0, out_en = 0;
    cout << "--------------------------------------" << endl;
    cout << "(1) Inserimento dati (misure italiane)" << endl;
    cout << "(2) Inserimento dati (misure inglesi)" << endl;
    cout << "(3) Esci" << endl;
    cout << "--------------------------------------" << endl;
    cin >> sel;
    switch (sel){
        case 1:
            cout << "--------------------" << endl;
            cout << "Inserisci peso (Kg):" << endl;
            cout << "--------------------" << endl;
            cin >> peso_it;
            cout << "-----------------------" << endl;
            cout << "Inserisci altezza (cm):" << endl;
            cout << "-----------------------" << endl;
            cin >> altezza_en;
            out_it = bmi_it(peso_it, altezza_it);
            break;
        case 2:
            cout << "-------------------" << endl;
            cout << "Insert weight (lb):" << endl;
            cout << "-------------------" << endl;
            cin >> peso_en;
            cout << "-------------------" << endl;
            cout << "Insert height (ft):" << endl;
            cout << "-------------------" << endl;
            cin >> altezza_en;
            out_en = bmi_en(peso_en,altezza_en);
            break;
            }
    return 0;
}
