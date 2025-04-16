#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The number is: " << num << endl;

    // Check if number is an odd or even number
    if (num % 2 == 0)
    {
        cout << "Even" << endl;
    }
    else
    {
        cout << "ODD" << endl;
    }

    return 0;
}