// Function with arguments or parameters and return type
#include <iostream>
using namespace std;

float Addition(float num1, float num2);
float Addition(float num1, float num2)
{
    return num1 + num2;
}

int main()
{
    float n1, n2;
    cout << "Enter 2 Numbers: \n";
    cin >> n1 >> n2;
    // Function call
    cout << Addition(n1, n2) << endl;
}
