/*
Gioco di sopravvivenza
*/
#include <iostream>
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */
using namespace std;
void print_map(int [][5],char*,int,int);
void update_over_map(int [][5],int [][5],int,int,int *,int *	);
int main(){
	char name[10];
	int difficulty;
	int actual_r=2;
	int actual_c=2;
	int bombs,lifes,points;
	int life_player=10;
	int under_map[5][5];
	int over_map[5][5];
	srand (time(NULL));
	points=0;
	cout<<"Inserisci il tuo nome:\n";
	cin>>name;
	cout<<"Inserisci difficoltà:\n1-Facile\n2-Medio\n3-Difficile\n";
	cin>>difficulty;
	cout<<"Comandi:\n-'a' : ↞\n-'d' : ↠\n-'w' : ↟\n-'s' : ↡\n";
	cout<<"Fai 14 punti per vincere\n";
	for (int r=0;r<5;r++){
		for (int c=0;c<5;c++){
				under_map[r][c]=0;//ok 
				over_map[r][c]=0;//hidden
			}
		}
		switch(difficulty){
			case 1:
			bombs=7;
			lifes=3;
			break;
			case 2:
			bombs=8;
			lifes=2;
			case 3:
			bombs=9;
			lifes=1;
		}
		for (int i=0;i<bombs;i++){
			int r = rand() % 5;
			int c = rand() % 5;
			under_map[r][c]=2;
		}
		for (int i=0;i<lifes;i++){
			int r = rand() % 5;
			int c = rand() % 5;
			if(under_map[r][c]!=2)
				under_map[r][c]=1;
			else{
				i--;
			}
		}
		over_map[actual_r][actual_c]=4;
		print_map(over_map,name,life_player,points);
		while(life_player>0 && points<13)
		{
			char move;
			cout<<"Fa la tua mossa\n";
			cin>>move;

			switch(move){
				case 'a':
				
				if(actual_c>0){
					
					//mossa lecita
					update_over_map(over_map,under_map,actual_r,actual_c,&life_player,&points);
					actual_c--;
					over_map[actual_r][actual_c]=4;
					print_map(over_map,name,life_player,points);

					
				} 
				break;
				case 'd':
				if(actual_c<4){
					//mossa lecita
					update_over_map(over_map,under_map,actual_r,actual_c,&life_player,&points);
					actual_c++;
					over_map[actual_r][actual_c]=4;
					print_map(over_map,name,life_player,points);
				} 
				break;
				case 'w':
				if(actual_r>0){
					
					//mossa lecita
					update_over_map(over_map,under_map,actual_r,actual_c,&life_player,&points);
					actual_r--;
					over_map[actual_r][actual_c]=4;
					print_map(over_map,name,life_player,points);
				} 
				break;
				case 's':
				if(actual_r<4){
					
					//mossa lecita
					update_over_map(over_map,under_map,actual_r,actual_c,&life_player,&points);
					actual_r++;
					over_map[actual_r][actual_c]=4;
					print_map(over_map,name,life_player,points);
				} 
				break;
			}
		}
		if(points==13){
			cout<< "\n---HAI VINTO!!! :D---\n";
		}
		else{
			cout<< "\n---HAI PERSO :(---\n";
		}
		

	}
	void update_over_map(int over_map[5][5],int under_map[5][5],int actual_r,int actual_c,int *life_player , int *points){
		

		if(under_map[actual_r][actual_c]<3){
			
			switch(under_map[actual_r][actual_c]){
				
				case 0:
				over_map[actual_r][actual_c]=1;
				under_map[actual_r][actual_c]=3;
				*points+=1;
				break;
				case 1: cout<<"\n---EXTRA LIFE!---\n";
				over_map[actual_r][actual_c]=3;	
				under_map[actual_r][actual_c]=4;
				*life_player+=1;
				break;
				case 2: cout<<"\n---BOOM!---\n";
				over_map[actual_r][actual_c]=2;	
				under_map[actual_r][actual_c]=5;
				*life_player-=2;
				break;
			}
		}
	else{//>3 are expired
		switch(under_map[actual_r][actual_c]){
			
			case 3:
			over_map[actual_r][actual_c]=1;
			
			break;
			case 4: 
			over_map[actual_r][actual_c]=3;	
			
			break;
			case 5: 
			over_map[actual_r][actual_c]=2;	
			
			break;
		}
	}
	
	
	
}
void print_map(int over_map[5][5],char name[10],int life_player,int points){
	cout<<"Name: "<<name<<endl;
	cout<<"Points: "<<points<<endl;
	cout<<"Life: "<<life_player<<endl<<endl;
	for(int r=0;r<5;r++){
		for (int c=0;c<5;c++){
			switch(over_map[r][c]){
				case 0:
				cout<<"■ ";
				break;
				case 1:
				cout<<"□ ";
				break;
				case 2:
				cout<<"✷ ";
				break;
				case 3:
				cout<<"✚ ";
				break;
				case 4:
				cout<<"☺ ";
				break;
			}
		}

		cout<<endl;

	}
}