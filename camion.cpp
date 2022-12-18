//  Created by Daniel Viola

#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Italian");
    int it1[2],it2[3],it3[2],p1=7, p2=2, p3=4, p4=3, p5=6, n1 = sizeof(it1) / sizeof(it1[0]), n2 = sizeof(it2) / sizeof(it2[0]), n3 = sizeof(it3) / sizeof(it3[0]);
    it1[0]=p1; it1[1]=p2;
    it2[0]=p1; it2[1]=p3; it2[2]=p4;
    it3[0]=p1; it3[1]=p5;
    cout << "Carico massimo " << *min_element(it1, it1 + n1) << " tonnellate." << endl;
    cout << "Carico massimo " << *min_element(it2, it2 + n2) << " tonnellate." << endl;
    cout << "Carico massimo " << *min_element(it3, it3 + n3) << " tonnellate." << endl;
    return 0;
}
