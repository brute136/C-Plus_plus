#include <iostream>
#include <string>
using namespace std;
//Making A Class's 
class Roll_Number{
    protected:
    //Making A Protected Variable For 
    //Inhariteting .
        int roll_number;
    public:
        //Defult Contructor For Derived Class 
        
        void set_roll_number(int);
        void out_roll_number();
};
void Roll_Number::set_roll_number(int roll){
    roll_number=roll;
}

void Roll_Number::out_roll_number(){
    cout<<"Your Roll Number Is : "<<roll_number<<endl;
}
//Making New Derived Class From roll_number class (base class)
class marks : public Roll_Number{
    protected:
        int maths;
        int physics;
     public:
         //Defult Contructor Mantoned In ToP
         marks(){}
         void Marks_print(){
             cout<<"Your Math Marks Is "<<maths<<endl;
             cout<<"Your Physics Marks Is "<<physics<<endl;
         }
};
//MAKING another Derived Class (base class marks) marks
class percentage : public marks{
        int percentage1;
    public:
        percentage(int x, int y){
            maths = x;
            physics = y;
        }
        void percentage4();
        
        
};
void percentage::percentage4(){
    out_roll_number();
    Marks_print();
    percentage1= (maths+physics)/2;
    cout<<"Your Percentage Is "<<percentage1<<"%"<<endl;
}

int main(){
	//Calling Funtion Using percentage class objecte 
	percentage ob1(100, 100);
	ob1.set_roll_number(28);
	ob1.percentage4();
	percentage ob2(99, 94);
	ob2.set_roll_number(29);
	ob2.percentage4();
	return 0; 
}