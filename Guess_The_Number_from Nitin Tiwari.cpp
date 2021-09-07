#include<iostream>
using namespace std;

int main(){
		int n = 18;
		int* pwd;
		pwd = &n;
		cout<<"\033[1;32m Hint The Number is Between 1 To 50 Don't cheat"<<endl;
		while(true){
		int Guess;
		cout<<"Guess The Number "<<endl;
		cin>>Guess;
		if (Guess == *pwd && Guess <= 50){
			cout<<"You Won"<<endl;
			cout<<" Thanks Nitin Tiwari For Giving This project"<<endl;
			break;
		}
		else if (Guess < 5){
			cout<<"Enter Bigger Number"<<endl;
		}
		else if (Guess>50){
			cout<<"Enter Smaller Number"<<endl;
		}
		}
		
		
		return 0;	
}
//Check out Nitin Tiwari