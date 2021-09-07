#include<iostream>
using namespace std;
int main(){
	int Array[5][3] ={
	        {1,2,3},
	        {4,5,6},
	        {7,8,9},
	        {10,11,12},
	        {13,14,15}
	        };
	        for (int i  = 0; i < 5; i++){
	        			for (int j = 0; j < 3; j++){
	        				cout<<" The Value Of "<<i<<","<<j<<" is "<<Array[i][j]<<endl;
	        	}
	        }
	
}