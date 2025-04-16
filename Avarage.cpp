// Write a program get the avarage of 500, 50 and 8999.9
#include <iostream>
using namespace std;

int main()
{
    float a, b, c, sum, avg;
    a = 500;
    b = 50;
    c = 8999.9;

    sum = a + b + c;
    avg = sum / 3;
    cout << "The avarage is: " << avg << endl;

    return 0;
}