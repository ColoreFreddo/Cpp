//
//  main.cpp
//  dado
//
//  Created by Daniel Viola on 22/11/22.
//

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Italian");
    int n;
    srand(time(NULL)); //dare un seed a random
    n=rand()%6+1; //numero random da 6 a 1
    cout<< "lancio dado: n.ottenuto= "<<n<< endl;
    getchar();
    return 0;
}
