#include<iostream>
#include<string>
using namespace std;
int main(){
	string x1;
	cout<<"Setup Your PassWord";
	getline(cin,x1);
	while (true){
		if (x1 =="Ninja" ){
			break;
		}else{
			string pass;
			cout<<"Enter Your Password Again";            getline(cin,pass);
			if (pass == "Ninja"){
				cout<<"Login Succce";
				break;
			continue;
		}}
	}
	
	
	
}