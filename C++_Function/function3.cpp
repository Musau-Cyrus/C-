// Function without Arguments and with return type
#include <iostream>
using namespace std;
int summation()
{
    int num1, num2, sum;
    cout << "Enter num1: ";
    cin >> num1;
    cout << "Enter num2: ";
    cin >> num2;

    sum = num1 + num2;
    return sum;
}

int main()
{
    int result = summation();
    cout << "Sum is: " << result << endl;
    return 0;
}
