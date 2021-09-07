#include <iostream>
#include <string>
using namespace std;
class Base1{
        int data1;
    public:
        Base1(int x){
            data1=x;
            cout<<"Base1 Construer Called"<<endl;
              cout<<"Value Of Base1 Is "<<data1<<endl;
        }
        ~Base1(){
            cout<<"Base1 Construer Destroy"<<endl;
        }
        
};
class Base2{
        int data2;
    public:
        Base2(int x){
            data2=x;
            cout<<"Base2 Construer Called"<<endl;
              cout<<"Value Of Base2 Is " <<data2<<endl;
        }
        ~Base2(){
            cout<<"Base2 Construer Destroy"<<endl;
        }
        
};
class Derived:public Base1, virtual public Base2{
        int data3;
      public:
          Derived(int x, int y, int z):Base1(x), Base2(y){
              data3=z;
              cout<<"Derived Class Constructer Called"<<endl;
              cout<<"Value Of Derived Class "<<data3<<endl;
          }
          ~Derived(){
              cout<<"Derived Class Districtor Called"<<endl;
              
          }
    
};
int main(){
	Derived obj(10, 20, 50);
	return 0; 
}