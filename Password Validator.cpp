#include<iostream>
using namespace std;
class binary{
	int v;
	string num1;
	string num2;
	string print1;
	string pass1;
	string pass2;
	public:
	void input(void);
	void print(void);
	void checkpass(void);
	void last(void);
	void exit(void);
	
};
void binary:: input(void){
	cout<<"1 For Make A BankAccount"<<endl<<"2 For Exit"<<endl;
cin>>v;
}
void binary::print(void){
	if (v == 1){
		cout<<"Enter Your Account Number : "<<endl;
		cin>>num1;
		cout<<"Enter Your PASSWORD :  "<<endl;
		cin>>num2;
		cout<<"\n\n\n1 For print Accout Details : ";
		cin>>print1;
		
	}
	
}
void binary::checkpass(void){
	if (print1 == "1"){
		cout<<"Enter Your Username : ";
		cin>>pass1;
		cout<<"Enter Your Password : ";
		cin>>pass2;
	}/*else{
		cout<<"Password Not Mathed";*/
	
}
void binary::last(void){
	checkpass();
	if(pass1== num1){
		cout<<"Your Bank Account Name is "<<num1<<endl;
		cout<<"Your Bank Password Was "<<num2<<endl;
		
}
else{
	cout<<"Pasword Not Matched";
}
}
void binary:: exit(void){
	if (v == 2){
		for (int mm = 0; mm < 2;mm++){
		cout<<"Exited Sucessful";
		break;

	}
	
	
}
}
int main(){
	binary Bank;
	Bank.input();
	Bank.print();
	Bank.last();
	Bank.exit();
	
	return 0;
}