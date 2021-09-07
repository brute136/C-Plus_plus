#include <iostream>
#include <string>
using namespace std;
void arr(int *arr){
    for(int x=1;x<10;x++){
        *(arr)=100*300/x;
         *(arr+x)=100*300/x;
    }
}
int main(){
	int array[10];
	arr(array);
	//cout<<array[0]<<endl;
	for(int I=0;I <10;I ++){
	    cout<<"Value Of "<<I <<" Index "<<endl;        cout<<array[I]<<endl;
	}
	
	return 0; 
}