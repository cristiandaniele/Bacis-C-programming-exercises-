/*
Trovare tutti i divisori di un numero inserito dall'utente
*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	bool exit=false;
	int num;
	cout<<"Il nome del programma è "<<argv[0];
	while(!exit){
		cout<<"Inserisci un valore o 0 per uscire\n";
		cin>>num;
		if(num!=0){
			int n_div=0;
			cout<<num<<" : ";
			for(int i=1;i<=num;i++){
				if(num%i==0){
					cout<<i<<" ";
					n_div++;
				}
			}
			if(n_div<=2){
				cout<<" -> primo"<<endl;
			}
			else{
				cout<<endl;
			}
		}
		else exit=true;
	}
	cout<<"Closing..";
	return 0;
}