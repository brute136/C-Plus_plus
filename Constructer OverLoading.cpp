#include <iostream>
#include <string>
using namespace std;
class Emp{
	int x;
	int c;
	public:
	   Emp(string x){
	   	if (x == "+"){
	   		cout<<"Hellos Your Cofee Price Is "<<10+40<<endl;
	   	}
	   	
	   }
	   Emp(string x, int num1, int num2){
	   	if (x == "+"){
	   		cout<<"Your Value Is "<<num1+num2<<endl;
	   	}
	   	else if (x == "-"){
	   		cout<<"Your Value Is "<<num1-num2<<endl;
	   	}
	   }
};
int main()
{
	Emp a("+");
	string x;
	int n;
	int n2;
	cout<<"Enter Your First Number : ";
	cin>>n;
	cout<<"Enter Your Second Number : ";
	cin>>n2;
	cout<<"Chose Method +/- \nEnter Here : ";
	cin>>x;
	
	Emp b(x, n, n2);
	return 0; 
}