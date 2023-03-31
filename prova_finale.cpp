#include <iostream>
#include "libreria.h"
using namespace std;
int MAX = 10;

struct automobile{
    string marca, nome, cognome;
    int cilindrata, anno;
};

automobile Elabora_Dati(){
    automobile macchina;
    fflush(stdin);
    cout << "inserire marca automobile: " << endl;
    getline(cin, macchina.marca);
    cout << "inserire nome: " << endl;
    getline(cin, macchina.nome);
    cout << "inserire cognome: " << endl;
    getline(cin, macchina.cognome);
    cout << "inserire cilindrata: " << endl;
    macchina.cilindrata = leggi_input();
    cout << "inserire anno: " << endl;
    macchina.anno = leggi_input();
    return macchina;
}

void Inserisci_Automobile_Richiesta(automobile vettore[], int dimensione){
    for(int i=0; i<dimensione; i++){
        cout << "inserire dati dell'automobile: " << endl;
        vettore[i] = Elabora_Dati();
        fflush(stdin);
    }
}

int Elabora_anno(automobile vettore[], int dimensione, int n){
    int conta = 0;
    for(int i=0; i<dimensione; i++){
        if(vettore[i].anno == n){
            conta++;
        }
    }
    return conta;
}

int Elabora_cilindrata(automobile vettore[], int dimensione){
    cout << "Gli utenti con una cilindrata superiore a 1500 sono: " << endl;
    for(int i=0; i<dimensione; i++){
        if(vettore[i].cilindrata >= 1500){
            cout<< vettore[i].cognome<< endl;
        }
    }
}

void Cambia_ordine(automobile &uno, automobile &due){
    automobile temporanea;
    temporanea = uno;
    uno = due;
    due = temporanea;
}

void Ordina_auto(automobile vettore[], int dimensione){
    for(int i=0; i<dimensione; i++){
        for(int x=i+1; x < dimensione; x++){
            if(vettore[i].anno > vettore[x].anno){
                Cambia_ordine(vettore[i], vettore[x]);
            }
        }
    }
}

void Stampa_anno(automobile vettore[], int dimensione){
    int n, trovato = 0;
    cout << "Inserire anno dell'auto: " << endl;
    n = leggi_input();
    trovato = Elabora_anno(vettore, dimensione,n);
    if(trovato == 0){
        cout << "Non ci sono automobili con caratteristiche specificata!" << endl;
    }else{
        cout << "Ci sono " << trovato << "auto immatricolate in quell'anno!" << endl;
    }
}

void Stampa_anno_finale(automobile vettore[], int dimensione){
    cout << "Auto immatricolate e vendute: "<< endl;
    for(int i = 0; i< dimensione; i++){
        cout << vettore[i].anno + ", ";
        cout << vettore[i].marca + ", ";
        cout << vettore[i].cilindrata + ", ";
        cout << vettore[i].nome + ", ";
        cout << vettore[i].cognome<<endl;
    }
}

int main() {
    int sel = 0;
    automobile automobili[MAX];
    do{
        cout << "Selezionare cosa fare: " << endl;
        cout << "0 - Inserimento dati automobile" << endl;
        cout << "1 - Visualizzare cognome di aquirenti con la cilindrata superiore a 1500cc" << endl;
        cout << "2 - Visualizzare numero totale di auto che sono state immatricolate in un anno specifico" << endl;
        cout << "3 - Ordinare la tabella in base all'anno di immatricolazione" << endl;
        cout << "4 - Stampare la tabella automobili" << endl;
        cout << "5 - Esci" << endl;
        sel = leggi_input();
        switch (sel)
        {
        case 0:
            Inserisci_Automobile_Richiesta(automobili, MAX);
            break;
        case 1:
            Elabora_cilindrata(automobili, MAX);
        case 2:
            Stampa_anno(automobili,MAX);
            break;
        case 3:
            Ordina_auto(automobili, MAX);
            cout << "ordinate!" << endl;
            break;
        case 4:
            Stampa_anno_finale(automobili, MAX);
            break;
        case 5:
            return 0;
        default:
            cout << "carattere non valido!" << endl;
            break;
        }
    }while(sel!=5);
}