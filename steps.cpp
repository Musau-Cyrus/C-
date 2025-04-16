#include <iostream>
using namespace std;

int main()
{
    int number = 100;

    while (number >= 0)
    {
        cout << number << endl;
        number -= 10;
    }

    return 0;
}