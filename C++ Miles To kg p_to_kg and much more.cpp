#include <iostream>
using namespace std;
int main()
{
	while(true){
	int input;
	cout << "1 For Kilometer To Miles" << endl;
	cout << "2 For Pound  To Kg" << endl;
	cout << "3 For Inchis To Foot" << endl;
	cout << "4 For Inchis To Metet" << endl;
	cout << "5 For centiMeter To Inchis" << endl;
	cout << "enter ";
	cin >> input;
	if (input == 5)
	{
		double centi;
		cout << "Enter Your Numbet : ";
		cin >> centi;
		cout << "The OuTput Is " << centi * 0.393701;
	}
	else if (input == 1)
	{
		double km;
		cout << "Enter Your Numbet : ";
		cin >> km;
		cout << "The OuTput Is " << km * 0.621371;
	}
	else if (input == 2)
	{
		double pund;
		cout << "Enter Your Numbet : ";
		cin >> pund;
		cout << "The OuTput Is " << pund * 0.453592;
	}
	else if (input == 3)
	{
		double inch_fot;
		cout << "Enter Your Numbet : ";
		cin >> inch_fot;
		cout << "The OuTput Is " << inch_fot * 0.0833333;
	}
	else if (input == 4)
	{
		double inches_met;
		cout << "Enter Your Numbet : ";
		cin >> inches_met;
		cout << "The OuTput Is " << inches_met * 0.0254;
	}
	else
	{
		cout << input << " Was Not Define in the Program"; 
		
	}
	string x;
	cout<<endl<<"[q] for quit or [c] for continue"<<endl;
	cin>>x;
	if (x == "c"){
		continue;
	}
	else if (x == "q"){
		exit(0);
	}
	}
	return 0;

}