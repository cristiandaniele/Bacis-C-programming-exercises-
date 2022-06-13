/*
	Consegna: Riempire un vettore e calcolare:
		- somma elementi di posto pari
		- somma elementi di posto dispari
		- somma totale
*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int b[100];
	int i=0;
	int somma_pari=0;
	int somma_dispari=0;
	int somma=0;
	int max=0;
	int min=0;
	do{
		cout<<"Inserisci un valore o 0 per terminare";
		cin>>b[i];
		if(b[i]==0) break;
		somma+=b[i];
		if(i%2==0){
			somma_pari+=b[i];
		}
		else{
			
			somma_dispari+=b[i];
			
		}
		if(i==0){
			max=min=somma=b[i];
		}
		else{
			
			if(b[i]>max) max=b[i];
			if(b[i]<min) min=b[i];

		}
		
		i++;
	}
	while(i<100);
	cout<<"Somma: "<<somma<<endl;
	cout<<"Somma pari: "<<somma_pari<<endl;
	cout<<"Somma dispari: "<<somma_dispari<<endl;
	cout<<"Massimo: "<<max<<endl;
	cout<<"Minimo: "<<min<<endl;
	return 0;
}