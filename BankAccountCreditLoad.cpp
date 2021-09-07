#include<iostream>
#include<string>
using namespace std;
int AccountLogin(){
	typedef struct{
		string Name;
		int Age;
		string Location;
	}Details;
	Details Costumerdetails;
	string Name1;
	cout<<"Enter Your Name "<<endl;
	cin >>Name1;
	Costumerdetails.Name = Name1;
	int Age1;
	cout<<"Enter Your Age"<<endl;
	cin>>Age1;
	Costumerdetails.Age = Age1;
	if (Age1 < 15 || Age1 > 100){
		while(true){
			
		cout<<"Try Again ";
		continue;
	//	break;
		
	}}
		
	string Location1;
	cout<<"Enter Your Location"<<endl;
	cin>>Location1;
	Costumerdetails.Location = Location1;
	cout<<"YOUR Accounts Was Maked Sucessfully";
	
	
	cout<<"\n\n\n\n";
	string Questions;
	cout<<"P  For Print Your Details"<<endl<<"E To Exit"<<endl;
	cin>>Questions;
	if (Questions == "p"){
		cout<<"Your Bank Account Name Is "<<Costumerdetails.Name<<endl;
		cout<<"Your Age is "<<Costumerdetails.Age<<endl;
		cout<<"Your Location Is "<<Costumerdetails.Location<<endl;
	}
}
int Credit(){
	int Credit;
	cout<<"Enter Your Amount";
	cin>>Credit;
	if (Credit >= 500){
	cout<<Credit<<" Rs Was Sucessfully Added"<<endl;
	cout<<"You Get  "<<Credit*1.04<<" Per Year"<<endl;
	}
	if (Credit < 500){
		while(true){
			cout<<"Enter Bigger Amount"<<endl;
			break;
		}
		
	}
}
int Loan(){
	int Ageea;
	cout<<"Enter Your Age.";
	cin>>Ageea;
	if (Ageea > 18 && Ageea < 42){
		cout<<"Loan Was Sucessfully Sumiited"<<endl;
	}
	else{
		cout<<"Loan Was Failed Try Again"<<endl;
	}
		
}
	
	
	





int main(){
		while(true){
		int Account;
 cout<<"1 For Make Account"<<endl<<"2 For Credit Balance"<<endl<<"3 For Request For A load"<<endl<<"4 For Change Colour To green"<<endl<<"5 For Change Colur to red"<<endl<<"Enter Here.  ";
		cin>>Account;
		if (Account == 1){
			AccountLogin();
			break;
		}
		else if(Account == 2){
			Credit();
			break;
			}
		else if (Account == 3){
			Loan();
		}else if (Account == 4)
		{
			cout<<"\033[1;32m\n\n\n\n";
			cout<<"Clour Change  To Green Sucessfully";            
			cout<<"\n\n\n";
	}
	else if (Account == 5){
		cout<<"\033[1;31m\n\n\n\n";
			cout<< "Clour Change To Red Sucessfully";            
			cout<<"\n\n\n";
	}
	else {
		cout<<"\n\n\n\n";
		cout<<Account<<" Intiger Was Not Define In The Program"<<endl;
		cout<<"\n\n\n";
	}
	
	
		
}
		
		return 0;	
}