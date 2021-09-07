#include <iostream>
#include <string>
using namespace std;
class main2{
    protected:
        friend class con;
        int a;
        int b;
     public:
         main2(){}
        
            
};
class con{
    public:
    con(){}   
       void print(){
           main2 onj;
       }
};
class last:public main2,public con{
    private:
        int sum;
    public:
        last(int x, int y){
            a = x;
            b = y;
        }
        void printf(){
                  cout<<"The Value of A  Is "<<a<<endl;
           cout<<"The  Value of B Is "<<b<<endl;   
            sum = a + b;
            cout<<"The Sum Is "<<sum<<endl;
        }
    
};
int main(){
	last obj(20, 30);
	obj.printf();
	return 0; 
}