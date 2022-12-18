//
//  main.cpp
//  Stampa_caratteri
//
//  Created by Daniel Viola on 29/11/22.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    char a;
    setlocale(LC_ALL, "Italian");
    for (int i=0; i<=255; i++)
    {
        a=i;
        cout << a << endl;
    };
    return 0;
}
