#include <iostream>
using namespace std;
int func(int x){
	if (x == 0 || x==1){
		return 1;
	}
		int v = func(x-2) + func(x-1);
		return v;
}

int main(){
	int v;
	cout<<"Enter Your Number : ";
	cin>>v;
	cout<<func(v);
	cout<<endl<<"Thanks For Using ";
	return 0;
}