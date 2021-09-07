#include<iostream>
using namespace std;
int main(){
	int num = 112;
	int * ptww;
	ptww = &num;
	cout<<"Hint The Number is between 100 to 150";
	for (int Guess = 9; Guess > 0; Guess--){
		int C;
	/*	cout<< " Hint : The Numer Is 100 to 150 ";*/
		cout<<"\nYou Have " << Guess<<" Guesses Left"<<endl;
		cin>>C;
		if (C < 100){
			cout<<"\nPlease Enter Bigger Number "<<endl;
		}
		else if (C > 150){
			cout<<"\nPlease Enter Lower Number  "<<endl;
		}
		else if(C == *ptww){
			int Tak = 10 - Guess;
			cout<<"You Won\n"<<endl<< " \nYou Take "<< Tak << " Guesses To Win"<<endl;
			cout <<"\nHappy Coding 🤗🤗🤗";
			break;
			
		}
	}
	
	
	
}