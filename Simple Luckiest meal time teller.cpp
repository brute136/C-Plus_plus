#include<iostream>
using namespace std;

int main(){
		enum Meal{breakfast, Lunch, Dinner};
		Meal Meal1=breakfast;
		Meal Meal2=Lunch;
		Meal Meal3 =Dinner;
		int x;
		cout<<"\033[1;35mEnter] Any Number Beetween 0 to 2  : ";
		cin>>x;
		if (x == Meal1){
			cout<<"Your Luckist Meal Today Is in Breakfast"<<endl;
		}
		else if (x == Meal2){
			cout<<"Your Luckist Meal Today Is in Lunch"<<endl;
			}
			else if (x == Meal3){
			cout<<"Your Luckist Meal Today Is in Dinner"<<endl;
		}
		else{
			cout <<"Attention Enter Number Beetween 0 To 2";
		}
			return 0;
}