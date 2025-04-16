#include <iostream>
using namespace std;

class Pool
{
protected:
    int l;
    int w;

public:
    void setDimensions(int length, int width)
    {
        l = length;
        w = width;
    }
};

// Derived classes from class Pool
class Wall1 : public Pool
{
public:
    float area()
    {
        return 2 * (l * w);
    }
};

class Wall2 : public Pool
{
public:
    float area(int h)
    {
        return 2 * (w * h);
    }
};

int main()
{
    Wall1 wall1;
    Wall2 wall2;

    wall1.setDimensions(10, 5);
    wall2.setDimensions(10, 5);

    float area1 = wall1.area();
    float area2 = wall2.area(7);

    cout << "The area of wall 1 is: " << area1 << endl;
    cout << "The area of wall 2 is: " << area2 << endl;

    return 0;
}