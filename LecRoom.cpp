#include <iostream>
using namespace std;

class LecRoom
{
private:
    float w, l;

public:
    LecRoom()
    {
        w = 12;
        l = 15;
    }

    LecRoom(float width, float length)
    {
        l = length;
        w = width;
    }

    float area()
    {
        return l * w;
    }
};

int main()
{
    LecRoom A;
    LecRoom B(21, 24.5);

    cout << "The area of A is: " << A.area() << endl;
    cout << "The area of B is: " << B.area() << endl;

    return 0;
}