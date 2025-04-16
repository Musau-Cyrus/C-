#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area(double a, double b) = 0;
};

// Derived class Rectangle
class Rectangle : public Shape
{
public:
    void area(double length, double width)
    {
        double result = length * width;
        cout << "The area is: " << result << endl;
    }
};

// Derived class Triangle
class Triangle : public Shape
{
public:
    void area(double base, double height)
    {
        double result = 0.5 * base * height;
        cout << "The area of the triangle is: " << result << endl;
    }
};

int main()
{
    Shape *shape;
    shape = new Rectangle();
    shape->area(5.0, 3.0);

    shape = new Triangle();
    shape->area(4.0, 6.0);

    return 0;
}