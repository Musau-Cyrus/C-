#include <iostream>
#include <cmath>
#define PIE 3.142
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class Circle : public Shape
{
private:
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area() override
    {
        float result = PIE * (pow(radius, 2));
        cout << "The area of the circle is: " << result << endl;
    }
};

int main()
{
    Circle c(7);
    c.area();

    return 0;
}
