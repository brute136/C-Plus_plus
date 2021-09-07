#include <iostream>
#include <string>
using namespace std;
class Student{
    int Score[5];
    int sum=1;
    public:
        void func(){
            for(int I:Score)
                cout<<I<<" ";
                cout<<endl<<sum<<endl;
            
        }
};
int main(){
	Student obj;
	obj.func();
	return 0; 
}