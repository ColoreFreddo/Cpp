//
//  main.cpp
//  ABBONAMENTI_METROPOLITANA
//
//  Created by Daniel Viola on 02/12/22.
//
//  Gli abbonamenti alla metropolitana di Roma possono essere settimanali (S), mensili (M) o annuali (A) e valgono per la sola zona centrale (tipo 1), per la
//  sola zona periferica (tipo 2) o per entrambe le zone (tipo 3). I costi sono quelli indicati nella seguente tabella:
//  Gli abbonamenti che non consentono di viaggiare nelle ore di punta (bassa priorità) hanno una riduzione del 20%. Progettare un programma che calcola il
//  costo dell’abbonamento a partire dalla durata, dal tipo e della priorità. Il programma deve finire solo su scelta dell’utente altrimenti deve sempre poter
//  fare il calcolo per altri abbonamenti.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int S[3]={10,5,15};
    int M[3]={30,20,40};
    int A[3]={250,150,300};
    int sel=0, c=0;
    char sn,sma;
    
    cout << "Seleziona il Tipo (1,2,3): " << endl;
    cin >> sel;
    switch (sel) {
        case 1:
            fflush(stdin);
            cout << "Selezionare tipo Settimanale, mensile, annuale (S/M/A): " << endl;
            cin >> sma;
            switch (sma) {
                case 'S':
                    fflush(stdin);
                    cout << "L'abbonamento verra' usato nelle ore di punta? (S/N): " << endl;
                    cin >> sn;
                    if (sn == 'S' || 's'){
                        c=S[0]-(S[0]*20/100);
                    }if (sn == 'N' || 'n'){
                        c=S[0];
                    }
                    cout << "Prezzo dell'abbonamento " << c << " euro." <<endl;
                    break;
                case 'M':
                    fflush(stdin);
                    cout << "L'abbonamento verra' usato nelle ore di punta? (S/N): " << endl;
                    cin >> sn;
                    if (sn == 'S' || 's'){
                        c=M[0]-(M[0]*20/100);
                    }if (sn == 'N' || 'n'){
                        c=M[0];
                    }
                    cout << "Prezzo dell'abbonamento " << c << " euro." <<endl;
                    break;
                case 'A':
                    fflush(stdin);
                    cout << "L'abbonamento verra' usato nelle ore di punta? (S/N): " << endl;
                    cin >> sn;
                    if (sn == 'S' || 's'){
                        c=A[0]-(A[0]*20/100);
                    }if (sn == 'N' || 'n'){
                        c=A[0];
                    }
                    cout << "Prezzo dell'abbonamento " << c << " euro." <<endl;
                    break;
            }
        case 2:
            fflush(stdin);
            cout << "Selezionare tipo Settimanale, mensile, annuale (S/M/A): " << endl;
            cin >> sma;
            switch (sma) {
                case 'S':
                    fflush(stdin);
                    cout << "L'abbonamento verra' usato nelle ore di punta? (S/N): " << endl;
                    cin >> sn;
                    if (sn == 'S' || 's'){
                        c=S[1]-(S[1]*20/100);
                    }if (sn == 'N' || 'n'){
                        c=S[1];
                    }
                    cout << "Prezzo dell'abbonamento " << c << " euro." <<endl;
                    break;
                case 'M':
                    fflush(stdin);
                    cout << "L'abbonamento verra' usato nelle ore di punta? (S/N): " << endl;
                    cin >> sn;
                    if (sn == 'S' || 's'){
                        c=M[1]-(M[1]*20/100);
                    }if (sn == 'N' || 'n'){
                        c=M[1];
                    }
                    cout << "Prezzo dell'abbonamento " << c << " euro." <<endl;
                    break;
                case 'A':
                    fflush(stdin);
                    cout << "L'abbonamento verra' usato nelle ore di punta? (S/N): " << endl;
                    cin >> sn;
                    if (sn == 'S' || 's'){
                        c=A[1]-(A[1]*20/100);
                    }if (sn == 'N' || 'n'){
                        c=A[1];
                    }
                    cout << "Prezzo dell'abbonamento " << c << " euro." <<endl;
                    break;
            }
        case 3:
            fflush(stdin);
            cout << "Selezionare tipo Settimanale, mensile, annuale (S/M/A): " << endl;
            cin >> sma;
                    switch (sma) {
                        case 'S':
                            fflush(stdin);
                            cout << "L'abbonamento verra' usato nelle ore di punta? (S/N): " << endl;
                            cin >> sn;
                            if (sn == 'S' || 's'){
                                c=S[2]-(S[2]*20/100);
                            }if (sn == 'N' || 'n'){
                                c=S[2];
                            }
                            cout << "Prezzo dell'abbonamento " << c << " euro." <<endl;
                            break;
                        case 'M':
                            fflush(stdin);
                            cout << "L'abbonamento verra' usato nelle ore di punta? (S/N): " << endl;
                            cin >> sn;
                            if (sn == 'S' || 's'){
                                c=M[2]-(M[2]*20/100);
                            }if (sn == 'N' || 'n'){
                                c=M[2];
                            }
                            cout << "Prezzo dell'abbonamento " << c << " euro." <<endl;
                            break;
                        case 'A':
                            fflush(stdin);
                            cout << "L'abbonamento verra' usato nelle ore di punta? (S/N): " << endl;
                            cin >> sn;
                            if (sn == 'S' || 's'){
                                c=A[2]-(A[2]*20/100);
                            }if (sn == 'N' || 'n'){
                                c=A[2];
                            }
                            cout << "Prezzo dell'abbonamento " << c << " euro." <<endl;
                            break;
        }
    }
}
