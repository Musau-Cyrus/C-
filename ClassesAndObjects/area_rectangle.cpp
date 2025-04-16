// Initializing variables in a class
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    void set_value(int l, int w);
    float area();
};

void Rectangle ::set_value(int l, int w)
{
    length = l;
    width = w;
}

float Rectangle ::area()
{
    return length * width;
}

int main()
{
    Rectangle r;
    r.set_value(10, 5);
    cout << "Area is: " << r.area() << endl;

    return 0;
}