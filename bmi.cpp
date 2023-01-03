//  Created by Daniel Viola

#include <iostream>
using namespace std;

float bmi_it(float peso, float altezza){ 
    return peso / (altezza*altezza);
}

float bmi_en(float peso, float altezza){
    float altezza_new = 0;
    altezza_new = altezza * 12;
    return 703 * peso / (altezza_new * altezza_new) + 0.001;
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
            cout << "Inserisci altezza (m):" << endl;
            cout << "-----------------------" << endl;
            cin >> altezza_it;
            if((peso_it > 9 && peso_it < 181) && (altezza_it > 0.9 && altezza_it < 2.21)){
					out_it = bmi_it(peso_it, altezza_it);
				}else {
                    cout << "Errore misure non valide!" << endl;
                    return 0;
                }
            cout << "--------------------" << endl;
            cout << "BMI = " << out_it << endl;
            cout << "--------------------" << endl;
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
            if((peso_en > 22.0461 && peso_en < 396.833) && (altezza_en > 3.2807 && altezza_en < 7.2179)){
					out_en = bmi_en(peso_en, altezza_en);
				}else {
                    cout << "Errore misure non valide!" << endl;
                    cout << peso_en << endl;
                    cout << altezza_en << endl;
                    return 0;
                }
            cout << "--------------------" << endl;
            cout << "BMI = " << out_en << endl;
            cout << "--------------------" << endl;
            break;
            }
    return 0;
}
