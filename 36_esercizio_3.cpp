#include <iostream>
#include <cmath>
using namespace std;

int main (int argc, const char * argv[]) {
    float a,b,c,d,s,s_1,s_2;
    cout << "calcolo equazione ax^2+bx+c=0 " << endl;
    cout << "inserisci il primo coefficiente, a" << endl;
    cin >> a; 
    cout << "inserisci il secondo coefficiente, b" << endl;
    cin >> b;
    cout << "inserisci il terzo coefficiente, c" << endl;
    cin >> c;
    delta = (pow(b,2)-(4*a*c));
    if (d < 0) {
        cout << "non ci sono soluzioni possibili" << endl;
    }
    else if(delta == 0) {
        s = -b/(2*a);
        cout << "ho una unica soluzione, x = " << s << endl;
    }
    else {
        s_1 = (-b + sqrt(d))/(2*a);
        s_2 = (-b - sqrt(d))/(2*a);
        cout << "le soluzioni sono x = " << s_1 << " e x = " << s_2 << endl;
    }
    return 0;
}
