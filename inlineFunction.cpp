#include <iostream>
#include <cmath>
#define PIE 3.142
using namespace std;

// Global variable
int radius;

inline void area()
{
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    float result = (4 / 3) * PIE * pow(radius, 3);
    cout << "The area is: " << result << endl;
}

int main()
{
    area();
    return 0;
}