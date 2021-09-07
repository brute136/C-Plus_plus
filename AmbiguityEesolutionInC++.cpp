#include <iostream>
#include <string>
using namespace std; 
class b{
    public:
        void greed(){
            cout<<"Hello"<<endl;
        }
};
class d{
    public:
        void greed(){
            cout<<"Mallo"<<endl;
        }
};
class c:public b, public d{
    public:
        void greed(){
           b::greed();
        }
        
};
using namespace std;
int main(){
	c g;
	g.greed();
	return 0; 
}