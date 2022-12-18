#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    int n_1,n_2,n_3;
    cout << "inserisci il primo numero" << endl;
    cin >> n_1;
    cout << "inserisci il secondo numero" << endl;
    cin >> n_2;
    cout << "inserisci il terzo numero" << endl;
    cin >> n_3;
    
    if (n_1 >= n_2){
        if(n_3 <=n_2){
            cout << n_3 << " ; " << n_2 << " ; " << n_1 << endl;
        }
        else {
            if (n_3 >= n_1) {
                cout << n_2 << " ; " << n_1 << " ; " << n_3 << endl;
            }
            else {
                cout << n_2 << " ; " << n_3 << " ; " << n_1 << endl;
            }
        }
    }
    else {
        if(n_3 <= n_1){
            cout << n_3 << " ; " << n_1 << " ; " << n_2 << endl;
        }
        else {
            if (n_3 >= n_2) {
                cout << n_1 << " ; " << n_2 << " ; " << n_3 << endl;
            }
            else {
                cout << n_1 << " ; " << n_3 << " ; " << n_2 << endl;
            }
        }

    }

    return 0;
}
