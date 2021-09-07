#include <iostream>
using namespace std;
class Student
{
public:
    int scores[5];
    int sum;
};

int main()
{
    auto s = Student();
    for(auto i : s.scores)
        cout << i << " ";
    cout << endl << s.sum << endl;
    return 0;
}