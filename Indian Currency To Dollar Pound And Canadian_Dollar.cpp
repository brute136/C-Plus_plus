#include<iostream>
using namespace std;
typedef struct Huge{
	float Dollar = 74.45f;
	float Pound = 103.12;
	float Canadian_Dollar = 59.21;
	
	} e;


int main(){
		e Currency;
		int Rupess;
		cout<<"How Much Rupess You Have"<<endl;
		cin >>Rupess;
		int Currency_type;
		cout<<"1 For Dollar"<<endl<<"2 For Pound "<<endl << "3 For Canadian Pound"<<endl;
		cin>>Currency_type;
		switch (Currency_type){
			case 1:
			cout<<"You Have "<<Rupess/Currency.Dollar<< " Dollar "<<endl;
			break;
			case 2:
			cout<<"You Have "<<Rupess/Currency.Pound<< " Pound "<<endl;
			break;
			case 3:
			cout <<"You Have "<<Rupess/Currency.Canadian_Dollar<< "Canadian_dollar "<<endl;
			break;
			default:
			cout<<Currency_type << " Is Not Define In The Program Try Agian With ";
			break;
		}
}