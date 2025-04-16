#include <iostream>
using namespace std;

class display
{
public:
    void pattern()
    {
        for (int i = 0; i <= 3; i++)
        {
            for (int j = 0; j < +i; j++)
            {
                cout << i * 3 << "\t";
            }
            cout << endl;
        }
    }
};

int main()
{
    display d;
    d.pattern();
}