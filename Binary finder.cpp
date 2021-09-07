#include <iostream>
#include <string>
using namespace std;
class Binary
{
  private:
	string bin;
	void NUm_Bin(void);

  public:
	void input(void);
	void Replace(void);
	void Print(void);
};
void Binary::input(void)
{
	cout << "Enter The Number : ";
	cin >> bin;
}
void Binary::NUm_Bin(void)
{
	for (int i = 0; i < bin.length(); i++)
	{
		if (bin.at(i) != '0' && bin.at(i) != '1')
		{
			cout << "Wrong Binary";
			exit(0);
		}
		else
		{
		}
	}
}
void Binary::Replace(void)
{
	NUm_Bin();
	for (int i = 0; i < bin.length(); i++)
	{
		if (bin.at(i) == '0')
		{
			bin.at(i) = '1';
		}
		else
		{
			bin.at(i) = '0';
		}
	}
}
void Binary::Print(void)
{
	cout << "The Value After After Replacong The binary" << endl;
	cout << bin;
}

int main()
{
	Binary Harry;
	Harry.input();
	Harry.Replace();
	Harry.Print();

	return 0;
}