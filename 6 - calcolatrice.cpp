/*
Calcolatrice con 4 operazioni
*/
#include <iostream>
using namespace std;

int main(){
	int operazione;
	float x,y;
	float tot;
	bool error=false;
	cout<<"Inserisci"<<" \n1-Somma \n2-Sottrazione\n3-Moltiplicazione\n4-Divisione\n";
	cin>>operazione;
	cout<<"Inserisci i valori\n";
	cin>>x>>y;
	switch(operazione){
		case 1:
		cout<<"Faccio la somma di "<<x<<" e "<<y<<" : ";
		tot=x+y;
		break;
		case 2:
		cout<<"Faccio la sottrazione di "<<x<<" e "<<y<<" : ";
		tot=x-y;
		if (tot<0){
			tot=tot*(-1);
		}
		break;
		case 3:
		cout<<"Faccio il prodotto di "<<x<<" e "<<y<<" : ";
		tot=x*y;
		break;
		case 4:
		if(y==0){
			error=true;
			cout<<"Error: Non puoi dividere per 0\n";	
		}
		else{
			cout<<"Faccio la divisione di "<<x<<" e "<<y<<" : ";
			tot=x/y;
			break;
			default:
			cout<<"Hai inserito un valore errato";
		}
		break;
	}
	if(!error)
	cout<<tot;
}