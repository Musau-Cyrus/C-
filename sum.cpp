#include <iostream>
using namespace std;

class Main
{
public:
    int sum(int x, int y)
    {
        return x + y;
    }
    int sum(int x, int y, int z)
    {
        return x + y + z;
    }
};

int main()
{
    Main obj;
    cout << "Sum is: " << obj.sum(10, 20) << endl;
    cout << "Sum is: " << obj.sum(10, 20, 30) << endl;
    return 0;
}