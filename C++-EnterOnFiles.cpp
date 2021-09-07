#include <iostream>
#include <string>
using namespace std;
int LogCat;
class DATALog{
	FILE *ptr;
	int cout1=0;
	public:
		DATALog(){
			ptr = fopen("/storage/emulated/0/MyLog.txt", "w");
		}
		//Creating A Funtion In Class For Loging That's User Run The Program
		void ExecuteLogSaver(){
			while(cout1 < 10000000){
				cout<<"Anter _ _"<<cout1<<"_ _\n";
				fprintf(ptr, "%s %s User Execute The File For The %d Time\n",__DATE__, __TIME__,  LogCat);	
			LogCat++;
			//var = var+1;
			cout1++;
		}
		}
		~DATALog(){
			cout<<"File Closed";
			fclose(ptr);
			
		}
};
int main(){
	DATALog emp;
	emp.ExecuteLogSaver();
	return 0; 
}
