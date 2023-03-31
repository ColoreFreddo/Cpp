#include <iostream>
using namespace std;
bool controlloinput(){
	bool r=true;
	if(cin.fail()){ // ritorna true se l'input � completamente errato
		cin.clear(); // reset dello stato dello stream 
		cin.ignore(1000,'\n');
		//cout <<"Errore!! inserimento errato!!\n";
		r=false;
	}else{
		cin.ignore(1000,'\n');
		if (cin.gcount()>1){
		//	cout <<"Errore!! inserimento errato!!\n";
			r=false;
		}
	}

	return r;
}

bool inputvalido(int n,int min,int max){
	bool r=true;
	if((n<min || n>max)){
		r=false;
		cout << "\nintervallo errato!\n";
	}
	return r;
}
//prende input numerico float controlla intervallo tra min  e max
int input_dati(int min,int max){
	string risposta;
	int n;
//	do{
		do {

			cout <<"inserisci un numero  compreso tra "<<min<<" e "<<max<<": ";
			cin >> n;
		
		}while(controlloinput()==false || inputvalido(n,min,max)==false);
		//cout <<"hai inserito il numero "<<n<<" sei sicuro? (s=si; n=no) "<<endl;
		//cin >>risposta;
//	} while(risposta!="s");
	return n;
}

//prende input numerico intero (da errore se float o double (controlla anche input non negativo)
int leggi_input(){
	bool in;
	int n;
	do{
		in=true;
		cin >> n;
		if(controlloinput()==false){ 
			cout << "valore errato!! inserisci un numero"<<endl;			
			in=false;	
		}		
		if (n<0 ){
			cout << "valore non pu� essere negativo!!"<<endl;
			in=false;			
		}

	}while(in==false);
	return n;
}

