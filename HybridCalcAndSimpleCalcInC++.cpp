#include <iostream>
#include <string>
using namespace std;
class Calculator{
    string Oparator;
    int Number;
    int Number1;
    public:
        void input();
        void numbers();
        void output();
        
};
void Calculator::input(){
    cout<<"1 For +"<<endl;
    cout<<"2 For -"<<endl;
    cout<<"3 For *"<<endl;
    cout<<"4 For /"<<endl;
    cout<<"Choose Your Method : ";
    cin>>Oparator;
}    
void Calculator:: numbers(){
    cout<<"Enter Your First Number :  ";
    cin>>Number;
    cout<<"Enter Your Second Number : ";
    cin>>Number1;
    if (Oparator=="1"){
        cout<<"Your Output Is "<<Number+Number1<<endl;
    }
    else if(Oparator=="3"){
        cout<<"Your Output Is "<<Number*Number1<<endl;
    }
    else if(Oparator=="4"){
          cout<<"Your Output Is "<<Number/Number1<<endl;
    }
    else if(Oparator=="2"){
          cout<<"Your Output Is "<<Number/Number1<<endl;
    }
    else{
        cout<<"Unexpected Error "<<endl;
    }
}
class Scientificcalculator{
    int input1;
    int num1;
    int num2;
    public:
    void input1_(){
        cout<<"1 For %"<<endl;
        cout<<"2 For MlToLiter"<<endl;
        cout<<"3 For SecToMin"<<endl;
        cout<<"4 For KgToGram"<<endl;
        cout<<"Enter Here : ";
        cin>>input1;
        if (input1==1){
            cout<<"Enter Your First Number : ";
            cin>>num1;
            cout<<"Enter Your Second Number";            cin>>num2;
            cout<<"Your Reminder Is : "<<num1%num2<<endl;
         }
         else if(input1==2){
             cout<<"Enter Your First Number : ";
            cin>>num1;
            cout<<"Your Liter Is "<<num1/1000;
    }
    else if(input1==3){
         cout<<"Enter Your First Number : ";
            cin>>num1;
            cout<<"Your Output Is"<<num1/60<<endl;
    }
    else if(input1==4){
        cout<<"Enter Your First Number : ";
            cin>>num1;
         cout<<"Your Output Is "<<num1/1000<<endl;
    }
    }
};
class hydrid : public Calculator, public Scientificcalculator{
    public:
        void Simplecalculator(){
            input();
            numbers();
        }
        void HydridCalculator(){
            input1_();
        }
}Calc;
int main(){
	int x;
	cout<<"1 For Simple Calculator "<<endl;
	cout<<"2 For Scientific Calcuator "<<endl;
	cin>>x;
	if (x==1){
	    Calc.Simplecalculator();
	}
	else if(x==2){
	      Calc.HydridCalculator();
	}
	return 0; 
}