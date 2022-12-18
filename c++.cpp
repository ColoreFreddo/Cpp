//
//  main.cpp
//  C++
//
//  Created by Daniel Viola on 20/11/22.
//
#include <iostream>
#include <curses.h>
#include <stdio.h>
using namespace std;

int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Italian");
    string titolo, autore, editore;
    int numpagine;
    float prezzo;
    cout<<"inserisci il titolo: \n";
    getline(cin,titolo);
    cout <<"inserisci l'editore: \n";
    getline(cin,editore);
    cout <<"inserisci l'autore: \n";
    getline(cin,autore);
    cout <<"inserisci numero di pagine: \n";
    cin>> numpagine;
    fflush(stdin);
    cout <<"inserisci prezzo: \n";
    cin>> prezzo;
    fflush(stdin);
    cout<< "dati del libro: /n";
    cout<<titolo<<endl;
    cout<<autore<<endl;
    cout<<editore<<endl;
    cout<<numpagine<<endl;
    cout<<prezzo<<endl;
}
