/*
 Riempire a piacere ( leggendo i valori da tastiera, con numeri casuali o in qualsiasi altro modo ) di dim 3x3.
 Sommare, per ogni riga, tutti gli elementi della riga e salvare le somme in un vettore di dimensione 3
 
 Ad esempio la matrice:
 
    4 1 0
    6 1 3
    3 3 7
 
 Avrà come vettore associato:
 
    5 10 13
 
 */

#include <iostream>
using namespace std;

int main(){
	int mat[3][3];
	int _vett[3];
	cout<<"La matrice è \n";
	int _somma=0;
	for (int r=0;r<3;r++){
		for (int c=0;c<3;c++){
			mat[r][c]=r+c;
            cout<<mat[r][c]<<" ";
			_somma+=mat[r][c];
		}
		_vett[r]=_somma;
		_somma=0;
		cout<<endl;
	}
    cout<<"\nIl vettore è"<<endl;
	for(int i=0;i<3;i++){
		cout<<_vett[i]<<"-";
	}
}
