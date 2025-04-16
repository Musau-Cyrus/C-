// Paramtrized constructors
#include <iostream>
using namespace std;

class Cuboid
{
private:
    int s;

public:
    Cuboid(int side)
    {
        s = side;
    }
    int volume()
    {
        return s * s * s;
    }
};

int main()
{
    Cuboid C(10);
    cout << "The volume is: " << C.volume() << endl;
    return 0;
}
