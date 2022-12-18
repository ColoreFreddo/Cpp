#include <iostream>
#include <cmath>

using namespace std;
int main(int argc, const char * argv[]) {
    string data_1, data_2, nome_1, nome_2;
    int scelgo;
    cout << "inserisci la prima data (A/M/G) \n";
    cin >> data_1;
    cin.ignore(1,'\n');
    cout << "inserisci il primo nome \n";
    getline(cin,nome1);
    cout << "inserisci la seconda data (A/M/G) \n";
    cin >> data_2;
    cin.ignore(1,'\n');
    cout << "inserisci il secondo nome \n";
    getline(cin,nome_2);
    cout << "in che ordine vuoi stampare? (digitare 0 per data e 1 per nome) \n";
    cin >> scelta;
    if (scelta == 0) {
        if (data_1 < data_2) {
            cout << data_1 << " ; " << nome_1 << endl;
            cout << data_2 << " ; " << nome_2 << endl;
        }
        else {
            cout << data_2 << " ; " << nome_2 << endl;
            cout << data_1 << " ; " << nome_1 << endl;
        }
    }
    else {
        if (nome_1 < nome_2) {
            cout << data_1 << " ; " << nome_1 << endl;
            cout << data_2 << " ; " << nome_2 << endl;
        }
        else {
            cout << data_2 << " ; " << nome_2 << endl;
            cout << data_1 << " ; " << nome_1 << endl;
        }
    }
return 0; 
}
