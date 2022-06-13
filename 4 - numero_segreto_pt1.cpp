/*
Indovina il numero segreto
*/

#include <iostream>
using namespace std;

int main(){
	int numero_segreto=917;
	int guess;
	bool win=false;
	cout<<"---Indovina il numero segreto---\n";
	cout<<"Prima occasione";
	cin>>guess;
	if (numero_segreto==guess){
		cout<<"Hai vinto";
		win=true;
	}
	else{
		if(numero_segreto>guess){
			cout<<"Il numero segreto è > del numero inserito\n";
		}
		else{
	cout<<"Il numero segreto è < del numero inserito\n";
		}
	}

		if(!win){
			cout<<"Seconda occasione";
			cin>>guess;
			if (numero_segreto==guess){
				cout<<"Hai vinto";
				win=true;
			}
			else{
				if(numero_segreto>guess){
					cout<<"Il numero segreto è > del numero inserito";
				}
				else{
					cout<<"Il numero segreto è < del numero inserito";
				}
			}
		}
}