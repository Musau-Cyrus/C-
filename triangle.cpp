#include <iostream>
#include <cmath>

using namespace std;

class Triangle
{
private:
    int a;
    int b;

public:
    Triangle(int base, int height)
    {
        a = base;
        b = height;
    }

    float hypo()
    {
        float valOfHypo = sqrt(pow(a, 2) + pow(b, 2));
        return valOfHypo;
    }
};

int main()
{
    Triangle T(12, 5);
    cout << "The value of the third side is: " << T.hypo() << endl;

    return 0;
}