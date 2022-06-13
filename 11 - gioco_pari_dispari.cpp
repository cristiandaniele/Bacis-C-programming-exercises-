/*
Gioco del pari o dispari
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main(){
	srand(time(NULL));
	int x;
	bool exit=false;
	char name[10];
	int score=0;
	int computer_number;
	int player_number;
	int odd;
	cout<<"Inserisci il nome\n";
	cin>>name;
	while(true){
		cout<<"Digita 0 per pari, 1 per dispari o -1 per uscire\n";
		cin>>odd;

		if(odd==-1) break;
		else if(odd==1||odd==0){
			if(odd==1) cout<<"Hai scelto dispari\n";
			else cout<<"Hai scelto pari\n";

			cout<<"Inserisci un valore compreso fra 0 e 5 o -1 per uscire\n";
			cin>>player_number;

			if(player_number==-1) break;
			if(player_number>5) {
				cout<<"Inserisci un numero compreso fra o e 5!\n";

			}
			else{
				computer_number=rand() % 6;
				cout<<"Il pc ha giocato il numero "<<computer_number<<" la somma è "<< computer_number+player_number<<endl;
				bool _pari= (computer_number+player_number%2==1)  ? _pari=false : _pari=true;

				if((odd&&!_pari)||(!odd&&_pari)){
					cout<<"Hai vinto\n";
					score++;
				}
				else{
					cout<<"Hai perso\n";
					score--;
				}
				cout<<"Il tuo punteggio è "<<score<<endl;
			}
		}
		else{
			cout<<"Digita 0 per pari, 1 per dispari!\n";
		}

	}
	cout<<name <<" il tuo punteggio finale è "<<score<<endl;
}