#include <iostream>
using namespace std;

class myClass
{
public:
    void disp()
    {
        cout << "Welcome to Classes and Objects" << endl;
    }
};

int main()
{
    myClass m;
    m.disp();
    return 0;
}