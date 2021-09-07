#include<iostream>
#include<string>
using namespace std;
int main(){
	string nume;
	cout<<"Enter Your Name:";
	getline(cin, nume);
	
	int Num;
	cout<<"Enter Your Age:";
	cin >> Num;
	if (Num <= 18){
		cout<<"hello "<<nume<< " You Are Only "<< Num <<" old But You Can use" ;
		
	} if (Num >= 18){
		cout<<"You Can Use";
		
	}
	cout<<"\033[1;32m\n\n\n\n1 For Print Anything You Want\n2 For A Simple Joke ";
	int Opt;
	cout<<"Type Here";
	cin>>Opt;
	if (Opt == 1){
		string Print;
		cout<<"\033[1;31m Enter here: ";
		cin>>Print;
		cout<<"\033[1;32m"<<Print;
	}
	if (Opt==2){
		int Sec;
		cout << "1 For 1st Joke\n2 For 2nd Joke\n3 For 3rd Joke\n4 For 4th joke\n5 For Exit";
		cin>>Sec;
		if (Sec == 1){
			cout<<"A woman in labor suddenly shouted, “Shouldn’t! Wouldn’t! Couldn’t! Didn’t! Can’t!” ";
		}
		if (Sec == 2){
			cout<<"A bear walks into a bar and says, “Give me a whiskey and … cola.” ";
		}
		if (Sec ==3){
			cout<<"Did you hear about the actor who fell through the floorboards?";
		}
		if (Sec==4){
			cout<<"Did you hear about the claustrophobic astronaut?";
		}
		if (Sec == 5){
			while(Sec == 5){
				cout<<"Exited";
				break;
	}	
		}
}
        }