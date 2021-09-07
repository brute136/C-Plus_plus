#include <iostream>
#include <string>
using namespace std; 
class Student {
    protected:
        int roll_number;
     public:
         void set_roll_number(int x){
             roll_number=x;
         }
         void print_num(){
             cout<<"Your Roll_Number Is "<<roll_number<<endl;
         }
};
class Marks:virtual public Student{
    protected:
        float maths;
        float Science;
    public:
        void set_dataf(float x, float y){
            maths=x;
            Science=y;
        }
        void set_dataf(int x, int y){
            maths=x;
            Science=y;
        }
        void printf_f_int(){
            cout<<"The Marks Is :"<<endl
                     <<"Maths: "<<maths<<endl
                     <<"Science: "<<Science<<endl;
        }
};
class Sports:virtual public Student{
    protected:
        int Score;
     public:
         void set_up(int s){
             Score = s;
         }
         void printf_scr(){
             cout<<"Your Score Is "<<Score<<endl;
         }
};
class Result:public Marks, public Sports{
    private:
        int total;
     public:
        void  printf_dT(){
             total = maths+Science + Score;
             print_num();
             printf_f_int();
             printf_scr();
             cout<<"Total Marks "<<total<<endl<<"Percentage : "<<total/3<<"%"<<endl;
         }
};
using namespace std;
int main(){
	Result obj;
	obj.set_roll_number(47);
	obj.set_dataf(10 , 5);
	obj.set_up(20);
	obj.printf_dT();
	return 0; 
}