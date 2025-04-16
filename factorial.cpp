#include <iostream>
using namespace std;

class FactorialCalc
{
private:
    int number;

public:
    void setNumber(int n)
    {
        if (n >= 0)
        {
            number = n;
        }
        else
        {
            cout << "Factorial is not defined for negative numbers." << endl;
            number = 0;
        }
    }

    long long computeFactorial()
    {
        long long fact = 1;
        for (int i = 1; i <= number; i++)
        {
            fact *= i;
        }
        return fact;
    }
};

int main()
{
    FactorialCalc fc;
    int n;

    cout << "Enter a number: ";
    cin >> n;

    fc.setNumber(n);
    long long result = fc.computeFactorial();

    cout << "factorial is: " << result << endl;

    return 0;
}