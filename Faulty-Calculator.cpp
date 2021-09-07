#include <iostream>
#include<string>
using namespace std;
class calculator
{
	int num1;
	int num2;
	string opt;
	public: 
	  void One_All(void){
	  	cout<<"Enter Your First Number :";
	  	cin>>num1;
	  	cout<<"Enter Your Second Number :";          cin>>num2;
	  	
	  	//sec Process;
	  	cout<<"First +\nSecnd -\nThird l*\nFourth /\nFifth %\nEnter Oparator :";
	  	cin>>opt;
	  	if(num1 == 57 && num2 == 17){
	  	     cout<<"The Sum is 455";
	  	     exit(0);
	  	}
	  	 if(num1 == 68 && num2 ;== 10){
	  	 	cout<<"The Sum is 120";
	  	 	exit(0);
	  	 	
	  	 }
	  	 else if (opt== "+"){
	  	     cout<<"The Sum is : "<<num1+num2;
	  	 }
	  	  else if (opt== "-"){
	  	     cout<<"The Sum is : "<<num1-num2;
	  	 }
	  	  else if (opt== "*"){
	  	     cout<<"The Sum is : "<<num1*num2;
	  	 }
	  	  else if (opt== "/"){
	  	     cout<<"The Sum is : "<<num1/num2;
	  	 }
	  	 else if (opt== "+"){
	  	     cout<<"The Sum is : "<<num1%num2;
	  	 }
	  	 
	  	 
	  	     
	  	     
	  	
	  }
};

int main()
{
	calculator Start;
	Start.One_All();
	return 0;
}