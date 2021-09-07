#include<iostream>
#include<string>
using namespace std;


int main(){
		string first;
		cout<<"[ JP ]  For Join and print Details [ E ] For Exit"<<endl;
		getline(cin,first);
		if (first == "JP"){
			struct EmployDetails{
				string name;
				int age;
				double salary;
				};
				string name;
				cout<<"Enter Your Name :";
				getline(cin, name);
				string Name = name;
				struct EmployDetails stringname;
				stringname.name = name;
				int Ages;
				cout<<"Enter Your Name";
				cin>>Ages;
				stringname.age = Ages;
				stringname.salary = 75000.00;
				
				cout<<"\033[1;32m \n \n";
				
				cout<<"The Employe Name Is "<<stringname.name<<endl;
				cout<<"The Age Of Employe Is "<<stringname.age<<endl;
				cout<<"The Salary Of Your Employ is "<<stringname.salary<<endl;
				}else if (first == "E"){
					while (true){
					cout<<"\033[1;32mProgram Exited Successful";
					break;
				}
				}
}