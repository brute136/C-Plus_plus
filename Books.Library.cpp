#include <iostream>
#include <string>
using namespace std; 
class lebrary{
	int Opt1;
	//Cresting Array And Defult Book We Have In Our Library
	string Bokks[10] = {" The Jungle Book ", " C++"," Python", " Java "};
	 //Give emp funtion Permission To Acces private Member Of lebrary Class
	friend void emp(void);
	int len = sizeof(Bokks)/sizeof(Bokks[0]);
	public:
	void Options(void){
		//printing Options
		cout<<"1 For Show All Books We Have "<<endl;
		cout<<"2 For Loan A Book "<<endl;
		cout<<"3 For Add A Book "<<endl;
		cout<<"4 For Return A Book "<<endl;
		cout<<"Enter : ";
		cin>>Opt1;
	}
	//printing All books
	void Show_All_Book(void){
		for (int l1=0;l1<len;l1++){
			cout<<Bokks[l1]<<endl;
		}
	}
	
//Making an Obj of Lebrary Class	
}o2;
void emp(void){
	if (o2.Opt1 == 1){
		o2.Show_All_Book();
	}
	if (o2.Opt1 ==2){
		//writing Code Later 
	}
	if (o2.Opt1 == 3){
		//writing Code Later 
	}
	if (o2.Opt1 == 4){
		//Writing Code Later 
	}
}
int main()
{
	//Calling The Funtion Options With Object 
	//emp without emp
	//this Funtions Are void Thats Why No Argument Given
	o2.Options();
	emp();
	
	return 0; 
}