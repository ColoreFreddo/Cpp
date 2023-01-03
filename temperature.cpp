//  Created by Daniel Viola

#include <iostream>
using namespace std;

bool controllo(float temperatura, char selezione){
    if ((selezione == '1') && (temperatura >= -999.99 && temperatura <= 999.99)){
        return true;
    } else if((selezione == '2') && (temperatura >= -1272.99 && temperatura <= 1272.99)){
        return true;
    } else if((selezione == '3') && (temperatura >= -1830.99 && temperatura <= 1830.99)){
        return true;
    }
}

void converti(float temperatura, char selezione){
    cout << "\n\n";
    if (selezione == '1'){
        cout << "In Kelvin, " << temperatura << " C sono " << (temperatura + 273.15) << " K\n";
        cout << "In Farhenheit, " << temperatura << " C sono " << (temperatura + 273.15) << " F\n";
    }else if (selezione == '2'){
        cout << "In Celsius, " << temperatura << " K sono " << (temperatura + 273.15) << " C\n";
        cout << "In Farhenheit, " << temperatura << " K sono " << (temperatura + 273.15) << " F\n";
    }else if (selezione == '3'){
        cout << "In Celsius, " << temperatura << " F sono " << (temperatura + 273.15) << " C\n";
        cout << "In Kelvin, " << temperatura << " F sono " << (temperatura + 273.15) << " K\n";
    }
}

int main() {
    setlocale(LC_ALL, "Italian");
    char sel; float temp;

    do {
         cout << "-----------------------" << endl;
         cout << "1. Scala Celsius (C)" << endl;
         cout << "2. Scala Kelvin (K)" << endl;
         cout << "3. Scala Farhenheit (F)" << endl;
         cout << "F. Fine elaborazione" << endl;
         cout << "-----------------------" << endl;
         cout << "Scegli la scala di temperatura:" << endl;
         cin >> sel;
         switch (sel){
            
             case '1':
                 cout << "Inserisci la temperatura in Celsius da convertire: " << endl;
                 cin >> temp;
                 if (controllo(temp, sel)){
                     converti(temp,sel);
                 }else{
                     cout << "Valori non validi!"<< endl;
                     return 0;
                 }
                 break;
             case '2':
                 cout << "Inserisci la temperatura in Farhenheit da convertire: " << endl;
                 cin >> temp;
                 if (controllo(temp, sel)){
                    converti(temp, sel);
                 }else{
                     cout << "Valori non validi!" << endl;
                     return 0;
                 }
                 break;
             case '3':
                 cout << "Inserisci la temperatura in Farhenheit da convertire: " << endl;
                 cin >> temp;
                 if (controllo(temp,sel)){
                     converti(temp, sel);
                 }else{
                     cout << "Valori non validi!" << endl;
                     return 0;
                 }
                 break;
             case 'f':
             case 'F':
                 sel = 'f';
                 break;
             default:
                 cout << "Errore! Carattere sconosciuto!" << endl;
                 break;
                 }
    }while(sel != 'f');
    return 0;
}
