#include<iostream>
#include <stdlib.h>
using namespace std;

void elabora(int [][5],int []);

int main(){
    srand(time(NULL));
    int input[5][5];
    int output[]={0,0,0,0,0};
    for (int r=0;r<5;r++){
        for (int c=0;c<5;c++){
            input[r][c]=rand()%10;
            cout<<input[r][c]<<" ";
        }
        cout<<endl;
    }
    elabora(input,output);
    cout<<"Il vettore è \n";
    for (int i=0;i<5;i++)cout<<output[i]<<" ";
}

void elabora(int mat[][5],int vett[5]){
    for (int r=0;r<5;r++){
        for (int c=0;c<5;c++){
            vett[r]+=mat[r][c];
        }
    }
}
