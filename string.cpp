//
//  main.cpp
//  string
//
//  Created by Daniel Viola on 22/11/22.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    setlocale(LC_ALL, "Italian");
    string st="contengo tanti caratteri";
    string st1=string("questa è una stringa");
    string str="uno";
    str="due";
    cout<<str<<endl;
    int n;
    n= st.length();
    cout<<n<<endl;
    char p;
    p=st.at(0);
    cout<<p<<endl;
    string s;
    s=st.substr(1,4);
    s=s+" testo nuovo"+str;
    cout<< s <<endl;
    return 0;
}
