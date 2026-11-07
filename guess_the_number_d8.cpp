#include <iostream>
using namespace std;

int main(){
	bool stopp=true;
	while(stopp){	
		srand(time(NULL));
		int x = 0+rand() %20;
		int player;
		bool stop=false;
		do{
			cout<<"guess the number: ";
			cin>>player;
			if(player>x){
				cout<<"too hight\n";
			}
			else if(player<x){
				cout<<"too low\n";
			}
			if(player!=x){
				cout<<"your lose\n";
			}
			else{
				stop=true;
			}
			
		}while(!stop);
		cout<<"your win!\n";
		short int yn;
		cout<<"do u wanna play again? 1/0\n1-stay 0-exit : ";
		cin>>yn;
		if(yn==0){
			stopp=false;
		}
	}
