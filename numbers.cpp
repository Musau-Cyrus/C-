#include <iostream>
using namespace std;

class Numbers
{
private:
    int num1, num2, num3;

public:
    void read()
    {
        cout << "Enter Numbers: ";
        cin >> num1 >> num2 >> num3;
    }

    friend class Mean;
};

class Mean
{
public:
    void calculateAvg(Numbers &n)
    {
        float avg = (n.num1 + n.num2 + n.num3) / 3;
        cout << "The average is: " << avg << endl;
    }
};

int main()
{
    Numbers N;
    N.read();

    Mean M;
    M.calculateAvg(N);

    return 0;
}