// this is a default constructor
#include <iostream>
using namespace std;

class Cuboid
{
private:
    int side;

public:
    Cuboid()
    {
        side = 10;
    }
    int volume()
    {
        return side * side * side;
    }
};

int main()
{
    Cuboid C;
    cout << "The volume is: " << C.volume() << endl;
    return 0;
}