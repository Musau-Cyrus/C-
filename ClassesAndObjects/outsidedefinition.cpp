// Definition of a metod outside of the class
#include <iostream>
using namespace std;

class myClass
{
public:
    void disp();
};

void myClass ::disp()
{
    cout << "Welcome to Classes and objects" << endl;
}
int main()
{
    myClass m;
    m.disp();

    return 0;
}