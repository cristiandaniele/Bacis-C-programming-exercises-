/*
	Consegna: Riempire una matrice e calcolare:
		- somma di ogni riga
        - somma di ogni colonna
    Serviranno due vettori, uno che conterrà la somma delle righe, l'altro la somma delle colonne
*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int mat[5][5];
    int somma_righe[5];
    int somma_colonne[5];
    srand(time(NULL));
    //inizializzo i vettori
    for(int i=0;i<5;i++){
        somma_colonne[i]=somma_righe[i]=0;
    }
    
    //inizializzo la matrice con valori random
    cout<<"La matrice generata è \n";
    for (int r=0;r<5;r++){
        for (int c=0;c<5;c++){
            mat[r][c]=rand()%10;
            cout<<mat[r][c]<<" ";
        }
        cout<<endl;
    }
    
    
    //faccio la somma delle righe
    for (int r=0;r<5;r++){
        for (int c=0;c<5;c++){
            somma_righe[r]+=mat[r][c];
        }
    }
    cout<<"\nIl vettore contenente le somme delle righe è :\n";
    //stampo il vettore somma_righe
    for (int i=0;i<5;i++){
        cout<<somma_righe[i]<<endl;
    }
    cout<<endl;
    
    for (int c=0;c<5;c++){
        for (int r=0;r<5;r++){
            somma_colonne[c]+=mat[r][c];
        }
    }
    
    cout<<"\nIl vettore contenente le somme delle colonne è :\n";
    //stampo il vettore somma_colonne
    for (int i=0;i<5;i++){
        cout<<somma_colonne[i]<<" ";
    }
    cout<<endl;
    
    //faccio la somma della diagonale principale
    int diag_p=0;
    for (int c=0;c<5;c++){
           for (int r=0;r<5;r++){
               if(r==c)
                   diag_p+=mat[r][c];
           }
       }
    
    cout<<"La somma dei valori della diagonale principale è "<<diag_p<<endl;
    
    //faccio la somma della diagonale secondaria
    int diag_s=0;
    for (int c=0;c<5;c++){
           for (int r=0;r<5;r++){
               if(r+c==4){
                   diag_s+=mat[r][c];
               }
           }
       }
    
    cout<<"La somma dei valori della diagonale secondaria è "<<diag_s<<endl;
    
    
    return 0;
}
