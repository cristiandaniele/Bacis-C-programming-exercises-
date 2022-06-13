/*
Calcolatrice base che fa due sole operazioni
*/
#include <iostream>
using namespace std;
int main(){
	int operazione,x,y;
	cout<<"Inserisci 1 per sommare 2 per sottrarre\n";
	cin>>operazione;
	cout<<"Inserici i due valori\n";
	cin>>x>>y;
	if(operazione==1){
		cout<<"La somma è "<<x+y;
	}
	else{
		cout<<"la sottrazione è "<<x-y;
	}
}