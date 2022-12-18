//
//  main.cpp
//  conversione_upper_lower
//
//  Created by Daniel Viola on 29/11/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Italian");
    char c;
    cout << "conversione da maiuscolo a minuscolo (F o f per finire): " << endl;
    cin >> c;
    do{
        cin >> c;
        if ((c>='a')&&(c<='z')){
            c = c + 'a' +'A';
        }
    }while(c!='F'&& c!='f');
    return 0;
}
