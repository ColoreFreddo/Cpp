//
//  main.cpp
//  Viola_Verifica_Intermedia
//
//  Created by Daniel Viola on 31/01/23.
//

#include <iostream>
using namespace std;

float DisplaySaldo(float saldo){
    return saldo;
}

bool Veroprel(bool vel){
    return vel;
}

float Prelievo(float soldi, float saldo){
    float saldo_out = 0;
    string sel = "";
    if (soldi < 0){
        cout << "Transazione impossibile: Prelievo negativo" << endl;
    }else{
        if (soldi > saldo){
            cout << "Il prelievo che stai effettuando è superiore al saldo;" << endl;
            cout << "Lo sconfinamento del saldo richiede interessi del 20%" << endl;
            cout << "Sei sicuro di voler svolgere l'operazione? (Si/No)" << endl;
            cin >> sel;
            if (sel == "Si" || sel == "sI" || sel == "SI" || sel == "si" || sel == "S" || sel == "s"){
                saldo_out = saldo - soldi;
                cout << "Prelievo effettuato!! Nuovo saldo aggiornato: " << saldo_out << endl;
            }else {
                saldo_out = saldo;
                cout << "Prelievo annullato dall'utente!!  Saldo invariato " << saldo_out << endl;
            }
        }else {
            cout << "errore valore negativo" << endl;
        }
    }
    return saldo_out;
}

float Versamento(float soldi, float saldo){
    float saldo_out = 0;
    if (soldi < 0){
        cout << "Il valore non può essere negativo!!" << endl;
    }else{
        saldo_out = saldo + soldi;
        cout << "versamento effettuato!! Nuovo saldo aggiornato: " << saldo_out << endl;
    }
    return saldo_out;
}

int menu(){
        int selez = 0;
        cout << "menu principale" << endl;
        cout << "selezionare (1,2,3,4,5):" << endl;
        cout << "1. Saldo" << endl;
        cout << "2. Prelievo" << endl;
        cout << "3. Versamento" << endl;
        cout << "4. Stampa ultimo movimento"<< endl;
        cout << "5. ==========> USCITA"<< endl;
        cin >> selez;
        return selez;
}

int main(int argc, const char * argv[]) {
    float saldo = 0, prelievo = 0, versamento = 0;
    int sel = 0,sel_old = 0;
    do{
        sel_old = sel;
        sel = menu();
        switch (sel){
            case 1:
                cout << "SALDO DISPONIBILE:" << DisplaySaldo(saldo) << endl;
                break;
            case 2:
                cout << "OPERAZIONE DI PRELIEVO" << endl;
                cout << "inserisci valore da prelevare  saldo disponibile: " << saldo << endl;
                cout << "Inserisci il valore:" << endl;
                cin >> prelievo;
                saldo = Prelievo(prelievo, saldo);
                break;
            case 3:
                cout << "OPERAZIONE DI VERSAMENTO:" << endl;
                cout << "Inserisci valore da versare  saldo disponibile: "<< saldo << endl;
                cout << "Inserisci il valore:" << endl;
                cin >> versamento;
                saldo = Versamento(versamento, saldo);
                break;
            case 4:
                switch (sel_old){
                    case 2:
                        cout << "Prelievo valore = " << prelievo << endl;
                        break;
                    case 3:
                        cout << "Versamento valore =  " << versamento << endl;
                        break;
                    default:
                        cout << "Non hai ancora effettuato movimenti!!" << endl;
                        break;
                }
        }
    }while(sel !=5);
    cout << "Grazie per aver usato il programma......" << endl;
    return 0;
}
