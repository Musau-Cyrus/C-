// Program that prints the area and perimeter of a rtriangle
#include <iostream>
using namespace std;

class Triangle
{
private:
    int a;
    int b;
    int c;

public:
    void set_val(int base, int height, int hyp);
    float area();
    float perimeter();
};

void Triangle ::set_val(int base, int height, int hyp)
{
    a = base;
    b = height;
    c = hyp;
}

float Triangle::area()
{
    return (0.5 * a * b);
}

float Triangle ::perimeter()
{
    return (a + b + c);
}

int main()
{
    Triangle T;
    T.set_val(10, 4, 6);
    cout << T.area() << endl;
    cout << T.perimeter() << endl;

    return 0;
}