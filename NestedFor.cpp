// Program to demonstrate Nested For Loop

#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            cout << j << "\t";
        }
        cout << endl;
    }
    return 0;
}