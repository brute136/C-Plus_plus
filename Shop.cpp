#include <iostream>
#include<string>
using namespace std;
class Compani{
	string name = "Nishanta";
	string pass = "OOOOO";
	string n;
	string namee;
	string pass1;
	string varible;
	string  p;
	string Grosari;
	int slot;
	int imp;
	string impier;
	string Num1;
	string Number2;
	string Str;
	string List[10] = { " Potato ",
	" Onion Cake ", " Chips " ,
	           					" DiterGen ", " RatKiller" 
	           					," Gift Card " };
	public:
	void options(void);
	void add(void);
	void print(void);
	void last(string nn, string vv);
};
void Compani::options(void){
	cout<<"1 For Buy Grosari "<<endl;
	cout<<"2 For Add Grosari "<<endl;
	cout<<"3 For Become A Employee Of The Shop"<<endl;
	cin>>imp;
	if (imp == 1){
	while (true){
	cout<<"You Want To Print The Groseri We Have"<<endl;
	cout<<"Y/N "<<endl;
	cin>>Num1;
	if (Num1 == "Y"){
		for (int arr=0;arr<10;arr++){
			cout<<arr <<List[arr]<<endl;
			
}
      cout<<"Type E For exit "<<endl;
}
	else if (Num1 == "N")
//exit(0);
	cout<<"Enter The Number Which One Do You Want To Buy "<<endl<<"Enter :";
	cin>>Number2;
	if (Number2 == "E"){
		exit(0);
	}
	cout <<"SuccesFully Buyed "<<endl;
		//continue;
	
		if (Number2 == "0" && List[0] != "Potato"){
			List[0]=" Potato Was Not Available Yet ";
		}if (Number2 == "1" && List[2] != "Onion Cake"){
			List[1]=" Onion Cake Was Not Available Yet ";
		}
		if (Number2 == "2" && List[2] != "Chips"){
			List[2]=" Chips Was Not Available Yet ";
		}
		if (Number2 == "3" && List[3] != "DiterGen"){
			List[3]=" DiterGen Was Not Available Yet ";
		}
		if (Number2 == "4" && List[4] != "RatKiller"){
			List[4]=" RatKiller Was Not Available Yet ";
		}
		if (Number2 == "5" && List[5] != "Gift Card"){
			List[5]=" Gift Card Was Not Available Yet ";
			
		}
			if (Number2 == "6"){
				string kkk = List[6];
			List[6]= List[6] + " Was Not Available Yet ";
}
	if (Number2 == "7"){
				string kkkk = List[7];
			List[7]= kkkk +" Was Not Available Yet ";
}
	if (Number2 == "8"){
				string kkkkk = List[8];
			List[8]= kkkkk + " Was Not Available Yet ";
}
	if (Number2 == "9"){
				string kkkkkk = List[9];
			List[9]= kkkkkk +" Was Not Available Yet ";
}
}}
if (imp == 2){
	cout<<"Only Employee Can Add "<<endl;
	
	cout<<"Enter Your Name :";
	cin>>n;
	cout<<"Enter Your PassWord : ";
	cin>>p;
	if (n == name || n == namee){
		cout<<"Username Mated";
		}
	else {
		cout<<"UserName Not Mated "<<endl;
		exit(0);
	}
	if (p == pass || p == pass1){
		cout<<endl<<"Password Mated "<<endl<<"You Can Use"<<endl;
	}
	else {
		cout<<endl<<"PassWord Not Mated "<<endl<<"You Cannot Use "<<endl;
		exit(0);
	}
	cout<<"Enter 1 To 10"<<endl;
	cout<<endl<<"The The Slot"<<endl;
	cin>>slot;
	cout<<"Please Give A Space "<<endl;
	cout<<"Enter The Grosari Name "<<endl;
	cin>>Grosari;
	if (slot > -1&& slot< 11){
		List[slot].append(" " + Grosari);
		cout<<"B To Go Home Lobby And E For Exit A ADD ANOTHER GROSARI"<<endl;
		cin>>varible;
		if (varible =="B"){
			options();
		}
		else if (varible == "A"){
			options();
		}
		else{
			exit(0);
		
		}
			
		}
		
	}
	
	
	}
void Compani::last(string nn, string vv){
	namee = nn;
	pass1 = vv;
	cout<<"C For Coming To Lobby And  E For Exit"<<endl;
	cin>>impier;
	if(impier == "C"){
		options();
	}
	else 
	{
		exit(0);
	}
	
}







int main(){
	Compani obj;
	obj.options();
	string x;
	string b;
	cout<<"Enter Your Name : ";
	cin>>x;
	cout<<"Enter Your Password : ";
	cin>>b;
	obj.last(x, b);
	return 0;
}