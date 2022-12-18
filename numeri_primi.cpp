//Created by Daniel Viola

#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "Italian");
	int n,i,j,t=0;
	cout<<"Inserire l'inizio della serie: ";
	cin>>n;
	for(i=2;i<=n;i++){
		cout << i << " : ";		
	 	for(j=1;j<=i;j++){		
			if(i%j == 0){				
				++t;
			}
		}
		if(t==2){
			cout<<" Ë primo "<<endl;
			t=0;
		}
		else if(t>2){
			cout<<" non Ë primo; ";
			t=0;
			for(j=1;j<=i;j++){		
			if(i%j == 0){
				t++;
				if(t==1){
					cout<<"i divisori sono: "<<j;
				}
				else if(t>1){
					cout<<", "<<j;
				}					
			}
		}
		t=0;
		cout <<endl;		
		}
    }
    return 0;
}
