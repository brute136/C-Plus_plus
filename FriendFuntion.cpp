#include <iostream>
#include <string>
using namespace std;
class M;
class M1{
	 int y;
	friend class M;
	int x;
	public:
	void p(void){
		cout<<"The Vale Of X is "<<x<<endl;
		cout<<"The Value Of Y Is "<< y<<endl;
	}
};
class M{
	friend class M1;
	public:
	void funnn(int e,  int g){
		M1 a;
		a.x = e;
		a.y = g;
		a.p();
	}
	
};

int main()
{
	M v;
	v.funnn(11,50);
	return 0; 
}