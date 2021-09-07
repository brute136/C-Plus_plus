#include <iostream>
#include <string>
#include<fstream>
using namespace std;
//1.  Creating A Template With Two Parameters'
template<class T, class T1>
//2.  Creating A Class Called Data
class Data{
    //Making Some Protected Variable With Templates T And T2 Variable
    protected:
        T Name;
        T String;
        T1 Age;
    public: //Making Public For Calling From Main Class
    
    //Creating Data Class Constructer With Two Parameters Using Templates T ans T1 Variable
        Data(T x, T1 y){
            Name = x;
            Age = y;
        }
        //Creating an Member Funtion Of Data Class 
        //The Return Type Of The Funtion n As T
        T Co(){
            return Name;
        }
        //Creating Second Funtion Of Data Class 
        //Return Type Of This Clas As T1
        T1 Ageee(){
            return Age;
        }
        //Creating An Funtion For Writing In File
        void printing_to_file(){
            //Creating An Constructer Of fbaseMember Clas s
            ofstream File;
            //Opening The Txt File In Write Mod 
            File.open("/sdcard/Your.txt");
            File<<__DATE__<<". "<<__TIME__<<"  "<<Name<<"  Open The File For First Time "<<endl;
            File<<Name<<" Age Is "<<Age<<endl;
            //Closing The File
            File.close();
        }
        //Creating Another Funtion For Reading The File
        void reading_file(){
            //Creating A Constructer Of ifstream Class 
            ifstream fl;
            //Opening The File And Reading 
            fl.open("/sdcard/Your.txt");
            while(fl.eof() != 1){
                getline(fl, String);
                cout<<String;
                 getline(fl, String);
                cout<<String;
                //Closing The File
                fl.close();
            }
            
        }
};
int main(){
    //Taking Input From User
	string Name;
	cout<<"Enter Your Name : ";
	getline(cin,Name);
	int Age;
	cout<<"Enter Your Age : ";
	cin>>Age;
	//Creating An Object Of Data Class And 
	//Giving Templates Variable Thare Type     //And Initializing The Name And Age Variable With Data Class Constructer
	Data<string, int>Obj(Name, Age);
	//Calling The Co() Funtion Of Data Clas s 
	cout<<"The Name Is "<<Obj.Co()<<endl;
	//Calling The Ageee() Funtion Of Data Class 
	cout<<"The Age Is "<<Obj.Ageee()<<endl;    //Calling printing_to_file() Funtion
	 Obj.printing_to_file();
	 //Calling reading_file() Funtion
	Obj.reading_file();
	return 0;
}

//Author Nishanta Aka TennX
//Building Date 7/September/2021


//region - India
//state - Assam 