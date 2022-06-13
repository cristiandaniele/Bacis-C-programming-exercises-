/*
Effettuare la somma di n elementi inseriti dall'utente
*/
#include <iostream>
using namespace std;
int main(){
	int somma=0;
	int input=0;
	// do{
	// 	cout<<"Inserisci un valore\n";
	// 	cin>>input;

	// 	somma+=input;
	// }
	// while(input!=0);
	// cout<<"La somma è: "<<somma;

	cout<<"Inserisci un valore\n";
	cin>>input;
	while(input!=0){
		somma+=input;
		cout<<"Inserici un valore\n";
		cin>>input;
	}
	cout<<"La somma è: "<<somma;
}