//
//  main.cpp
//  ordinamento_alfabetico_due_nomi
//
//  Created by Daniel Viola on 22/11/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Italian");
    string nome1, nome2;
    cout<<"inserisci primo nome: "<<endl;
    getline(cin, nome1);
    cout<<"inserisci secondo nome: "<<endl;
    getline(cin, nome2);
    cout<< "stampa in ordine alfabetico"<<endl;
    if (nome1<nome2){
        cout<< nome1<<";"<<nome2<<endl;
    }else{
        cout<< nome2<<";"<<nome1<<endl;
    }
    return 0;
}
