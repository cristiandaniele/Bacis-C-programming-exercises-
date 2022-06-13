/*
Calcolare il fattoriale di un numero
*/
#include <iostream>
using namespace std;
int main(){
	int x;
	int fatt=1;	
	cout<<"Inserisci un numero di cui fare il fattoriale\n";
	cin>>x;

	while(x>=1){
		fatt*=x;
		x--;
	}
	cout<<"Il fattoriale richiesto è "<<fatt;
}