//
//  secondo.cpp
//  C++
//
//  Created by Daniel Viola on 22/11/22.
//

#include <iostream>
#include <math.h>
using namespace std;
int main() {
    setlocale(LC_ALL, "Italian");
    float a=100.15;
    cout << abs(-a)<<endl; //val assoluto
    cout<<sqrt(a)<<endl; //radice quadrata
    cout<< ceil(a)<<endl; //minimo di intero non maggiore di a
    cout<<floor(a)<<endl;
    cout<<log(a)<<endl;
    cout<<log10(a)<<endl;
    cout<<pow(a,2)<<endl;
    return 0;
}
