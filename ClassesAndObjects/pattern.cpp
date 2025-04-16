// Programthat uses classes and objects to implement the program below
// C     C      C
// C     C      C
// C     C      C

#include <iostream>
using namespace std;

class pattern
{
public:
    void display();
};

void pattern ::display()
{
    for (int i = 0; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << "C\t";
        }
        cout << endl;
    }
}

int main()
{
    pattern p;
    p.display();

    return 0;
}