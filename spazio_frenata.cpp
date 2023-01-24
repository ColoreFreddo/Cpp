//  Created by Daniel Viola

#include <iostream>
using namespace std;

// Variabili globali

const float asf_ruv = 0.6;
const float asf_lis = 0.5;
const float asf_bag = 0.4;
const float asf_ghi = 0.1;

// Funzioni

float c_vel(float vel, float t_asf){
    return (vel*vel) / (250 * t_asf);
}

bool controlloInput(){
    bool r=true;
    if(cin.fail() ){
        cout << "Errore! inserimento errato !!!! \n";
        cin.clear();
        cin.ignore(1000,'\n');
        r=false;
    }else{
        if((cin.gcount()>1)){
            cout << "Errore! inserimento errato !!!! \n";
            r=false;
    }
}
    return r;
}

//main

int main() {
    bool r=true, ceck=false;
    int n;
    int sel=0, kys=0;
    float km=0, s=0;
    setlocale(LC_ALL, "Italian");
    do{
        do{
        cout << "-------------------------------" << endl;
        cout << "-Selezionare azione:          -" << endl;
        cout << "-(1) Input dati               -" << endl;
        cout << "-(2) Calcolo spazio frenata   -" << endl;
        cout << "-(3) Stampa risultati         -" << endl;
        cout << "-(4) Esci                     -" << endl;
        cout << "-------------------------------" << endl;
        cin >> kys;
        }while (controlloInput() == false);
        switch (kys){
            case 1:
                do{
                cout << "-------------------------------" << endl;
                cout << "-Inserire la velocità in Km/h:-" << endl;
                cout << "-------------------------------" << endl;
                cin >> km;
                cout << "-------------------------------" << endl;
                cout << "-Selezionare tipo di asfalto: -" << endl;
                cout << "-(1) ruvido                   -" << endl;
                cout << "-(2) liscio                   -" << endl;
                cout << "-(3) bagnato                  -" << endl;
                cout << "-(4) ghiacciato               -" << endl;
                cout << "-------------------------------" << endl;
                cin >> sel;
                ceck=true;
                }while (controlloInput() == false);
                break;
            case 2:
                if (ceck==true){
                    switch (sel){
                        case 1:
                            s = c_vel(km, asf_ruv);
                        break;
                        case 2:
                            s = c_vel(km, asf_lis);
                        break;
                        case 3:
                            s = c_vel(km, asf_bag);
                        break;
                        case 4:
                            s = c_vel(km, asf_ghi);
                        break;
                }if (ceck==false){
                    cout << "ERRORE: inserire prima gli input" << endl;
                }
            break;
            }
            case 3:
                cout << "-------------------------------" << endl;
                cout << "-Spazio frenata = " << s << "-" << endl;
                cout << "-------------------------------" << endl;
                break;
            case 4:
                return 0;
        }
    }while (kys!=4);
        return 0;
}


