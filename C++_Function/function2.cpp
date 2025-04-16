// Function with Arguments and no return types
#include <iostream>
using namespace std;

void Addition(float num1, float num2);
void Addition(float num1, float num2)
{
    float sum = num1 + num2;
    cout << "The sum is: " << sum << endl;
}
int main()
{
    Addition(10, 30);

    return 0;
}