/*
Disegnare un rettangolo con dimensioni inserite dall'utente con la seguente forma

*-*-*-*-*
-*-*-*-*-

Fatto con due cicli for e non come è stato fatto in aula
*/
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int b,h;
	cout<<"Inserisci base ed altezza"<<endl;
	cin>>b>>h;
	for(int r=0;r<h;r++){
		for (int c=0;c<b;c++){
			char x = ((c+r)%2==0) ? '*' : '-';
			cout<<x;
		}
		cout<<endl;
	}
	return 0;
}