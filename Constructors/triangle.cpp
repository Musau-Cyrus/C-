#include <iostream>
#include <cmath>
using namespace std;

class Triangle
{
private:
    float b;
    float h;

public:
    Triangle()
    {
        b = 12;
        h = 4;
    }
    Triangle(float base, float height)
    {
        b = base;
        h = height;
    }

    float hypo()
    {
        float hyp = sqrt((pow(b, 2)) + (pow(h, 2)));
        return hyp;
    }
};

int main()
{
    Triangle T;
    Triangle T1(14.5, 7.8);

    cout << T.hypo() << endl;
    cout << T1.hypo() << endl;

    return 0;
}