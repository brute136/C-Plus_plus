#include <iostream>
#include <string>
using namespace std;
template <class Variable>
class Vector{
    public:
        Variable * pointer;
        int Size;
        Vector(int Size){
            this->Size=Size;
            pointer = new int[Size];
        }
        Variable print(Vector &obj){
            Variable ob=0;
            for(int v=0;v<Size;v++){
                ob += this->pointer[v] * obj.pointer[v];
                
                
            }
            return ob;
        }
};
int main(){
	Vector<int> mydef(3);
	mydef.pointer[0]=1l;
	mydef.pointer[1]=1;
	mydef.pointer[2]=1;
	Vector<int>mydef2(3);
	mydef2.pointer[0]=1;
	mydef2.pointer[1]=1;
	mydef2.pointer[2]=1;
	cout<<mydef.print(mydef)<<endl;
	
	
	
	return 0; 
}