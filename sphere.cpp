#include <iostream>
#include <cmath>
#define PIE 3.142

using namespace std;

class Sphere
{
public:
    float radius, volume;

    void calculateVolume()
    {
        cout << "Enter the radius of the sphere: ";
        cin >> radius;

        volume = (4.0 / 3.0) * PIE * pow(radius, 3);
        cout << "The volume is: " << volume << endl;
    }
};

int main()
{
    Sphere S;
    S.calculateVolume();

    return 0;
}