#include<iostream>
using namespace std;

void stampa();

int incrementa (int );

void incrementa_due_valori(int *, int *);

void azzera(int *,int);
void init(int *, int);

int main(){
    
    int vett [10];
   
    init(vett,10);
     cout<<"Vettore iniziale: \n";
    for (int i=0;i<10;i++)cout<<vett[i]<<" ";
    azzera(vett,10);
    cout<<"\nVettore dopo la funzione: \n";
    for (int i=0;i<10;i++)cout<<vett[i]<<" ";
    
    
}

void init(int *v,int dim){
    
    for (int i=0;i<dim;i++){
        v[i]=1;
    }
}
void azzera(int *v,int dim){
    
    for (int i=0;i<dim;i++){
        v[i]=0;
    }
}




void stampa(/* possibili parametri */){
    cout<<"Hello word";
}



int incrementa(int x){
    x+=1;
    return x;
}

void incrementa_due_valori(int *a,int *b){
    *a+=1;
    *b+=1;
}
