// Program that accepts an integer and dtermines whether it is odd or even

#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num % 2 == 0)
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }
    return 0;
}