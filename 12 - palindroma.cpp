
/*
	L'utente inserisce una parola e il programma riesce a 
	stabilire se è palindroma o meno.
*/

#include <iostream>
using namespace std;

int main(){
	char parola[100];
	int len=0;
	cout<<"Scopri se è palindroma\n";
	cin>>parola;
	//trovo la lunghezza della parola
	for (int i=0;i<100;i++){
		if(parola[i]=='\0'){
			break;
		}
		else{
			len++;
		}
	}
	//faccio il controllo sulla stringa
	int j=len-1;
	int i;
	for(i=0;i<len;i++){
		if(parola[j]!=parola[i]){
			break;
		}
		j--;
	}
	//controllo la condizione di uscita
	if(i==len){
		cout<<"La parola è palindroma\n";
	}
	else{
		cout<<"La parola non è palindroma\n";
	}
}