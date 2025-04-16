#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float number, squareRoot, square, cubed;
    cout << "Enter A number: ";
    cin >> number;

    squareRoot = sqrt(number);
    cout << "The square Root of the number is: " << squareRoot << endl;

    square = pow(number, 2);
    cout << "Te Square of the number is: " << square << endl;

    cubed = pow(number, 3);
    cout << "The number cubed is: " << cubed << endl;
}