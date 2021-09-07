#include<iostream>
using namespace std;
int Fun(int,int);
void cut(void);
int main(){
		int Num1,Num2;
		cout<<"Enter Your Number ";
		cin>>Num1;
		cout<<"Enter Your % num ";
		cin>>Num2;
		Fun(Num1,Num2);
		cut();
		
		
		return 0;
}
int Fun(int Ar1 , int Ar2){
	if (Ar1%Ar2 == 0){
		cout<<"\n\n\n\033[1;32m" <<Ar1<<" % " <<Ar2<<" We Have left  "<<Ar1%Ar2<<endl<<" It's True "<<endl;
		cout<<"Output Is "<<Ar1<< " ÷ " <<Ar2<<" = " <<Ar1/Ar2;
	}
		else if (Ar1%Ar2 >= 1){
			cout<<"We Have Left "<<Ar1%Ar2<<endl<<" it's False ";
			
		}
}
void cut(){
	cout<<"\n\nHappy Codding";
	
	}