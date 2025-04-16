// Single inheritance - It is a derived class which inherits only from one base class
#include <iostream>
using namespace std;

class Vehicle
{
protected:
    string brand;
    int year;

public:
    Vehicle(string b, int y)
    {
        b = brand;
        y = year;
    }

    void displayInfo()
    {
        cout << "Brand: " << brand << "Year: " << year << endl;
    }
    void honk()
    {
        cout << "Beep! Beep!" << endl;
    }
};

// Derived class
class Car : public Vehicle
{
private:
    int numDoors;

public:
    Car(string b, int y, int doors) : Vehicle(b, y)
    {
        numDoors = doors;
    }
    void displayCarInfo()
    {
        displayInfo();
        cout << "Number of doors: " << numDoors << endl;
    }
};

int main()
{
    Car myCar("Toyota", 2003, 4);
    myCar.displayCarInfo();
    myCar.honk();
    return 0;
}
