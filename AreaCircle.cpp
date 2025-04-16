// The program should accept radius from the user

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float radius;
    cout << "Enter a Radius: ";
    cin >> radius;

    const float PIE = 3.142;
    float area = PIE * pow(radius, 2);

    cout << "The area is: " << area << endl;
}
