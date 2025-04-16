#include <iostream>
#include <cmath>
#define PIE 3.142
using namespace std;

// Find area of a circle given a radius of 5 and volume of sphere of same radius
int main()
{
    float radius = 5;
    float area = PIE * pow(5, 2);
    float volume = 4 / 3 * (PIE * pow(5, 3));

    cout << "The Area is: " << area << endl;
    cout << "The Volume is: " << volume << endl;
}