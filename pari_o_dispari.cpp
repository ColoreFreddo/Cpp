//
//  main.cpp
//  pari_o_dispari
//
//  Created by Daniel Viola on 22/11/22.
//

#include <iostream>
using namespace std;
int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Italian");
    int n;
    cout<<"inserisci un numero: "<< endl;
    cin >> n;
    if (n%2==0){
        cout<< "numero pari"<<endl;
    }else{
        cout<< "numero dispari"<<endl;
    }
    return 0;
}
