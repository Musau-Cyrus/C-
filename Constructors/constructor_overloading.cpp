#include <iostream>
using namespace std;

class Person
{
    int age;

public:
    Person()
    {
        age = 20;
    }
    Person(int Age)
    {
        age = Age;
    }

    int getAge()
    {
        return age;
    }
};

int main()
{
    Person p;
    Person p1(30);
    cout << "Age is: " << p.getAge() << endl;
    cout << "Age is: " << p1.getAge() << endl;
}