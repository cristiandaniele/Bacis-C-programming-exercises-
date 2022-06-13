#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void fill_mat(int mat[][5],int _r,int _c){
    for (int r=0;r<_r;r++){
        for (int c=0;c<_c;c++){
            mat[r][c]=rand()%10;
        }
    }
}
void print_mat(int mat[][5],int _r,int _c){
    for (int r=0;r<_r;r++){
        for (int c=0;c<_c;c++){
            cout<<mat[r][c]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    srand(time(NULL));
    int mat[5][5];
    int vett[]={0,0,0,0,0};
    int val,ad;
    fill_mat(mat,5,5);
    print_mat(mat,5,5);
    cout<<"Inserisci valore da soddisfare\n";
    cin>>val;
    do{
        cout<<"Inserisci valore di adiacenza maggiore di 1 e minore di 5\n";
        cin>>ad;
    }
    while(ad>5||ad<=1);
    for (int c=0;c<5;c++){
        for(int r=0;r<5;r++){
            int _cont=mat[r][c];
            int cont_ad=0;
            int j=r;
            while (j+1<5&&cont_ad<ad-1){
//                cout<<"Sommo "<<_cont<<" con "<<mat[j+1][c];
                _cont+=mat[j+1][c];
//                cout<<" e ottengo "<<_cont<<endl;
                cont_ad++;
                if(_cont>=val){
                    vett[c]=1;
                }
                j++;
            }
        }
    }
    cout<<"Il vettore associato è: "<<endl;
    for(int i=0;i<5;i++){
        cout<<vett[i]<<" ";
    }
}
