//  Created by Daniel Viola

#include <iostream>
using namespace std;

void scambia1(int v1, int v2){
    int temp;
    temp=v1;
    v1=v2;
    v2=temp;
    cout << "Variabili scambiate v1 = " << v1 << " variabile v2=" << v2<< endl;
}

int main() {
    setlocale(LC_ALL, "Italian");
    int var1, var2;
    cout << "inserire primo numero: ";
    cin >> var1;
    cout << "inserire secondo numero: ";
    cin >> var2;
    scambia1(var1,var2);
    
    return 0;
}


