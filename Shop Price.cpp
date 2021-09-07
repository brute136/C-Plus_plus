#include <iostream>
using namespace std;
class shop
{
	int Id[100];
	int price[100];
	int count;
	int Who;

  public:
	void init(void)
	{
		count = 0;
	}
	void print(void);
	void display(void);
	void WhoMuchTime(void);
};
void shop::print(void)
{
	cout << "Enter Your Id : " << endl;
	cin >> Id[count];
	cout << "Enter Your price" << endl;
	cin >> price[count];
	count++;
}
void shop::display(void)
{
	for (int i = 0; i < count; i++)
	{
		cout << "The id Of " << i << " Th "
			 << " Is " << Id[i] << endl
			 << "The Price Of " << i << " Th Is " << price[i] << endl;
	}
}
/*Add Fun Start Wuth 0
if you Type 1 then its will be execute 
2 Times print(funtion)
*/
void shop::WhoMuchTime(void)
{
	cout << "How Much Thing You Want To Add" << endl;
	cin >> Who;
	for (int loop = 0; loop <= Who; loop++)
	{
		print();
	}
}

int main()
{
	shop En;
	En.init();
	En.WhoMuchTime();
	En.display();
	return 0;
}