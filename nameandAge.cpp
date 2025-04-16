// Program that accepts name and age and checks if age is more that 60 then outputs RETIRE else if ege below 60 then it outputs NOT RETIRE

#include <iostream>
using namespace std;

int main()
{
    string name;
    int age;
    cout << "Enter emloyees name: ";
    getline(cin, name);
    cout << "Enter employees age: ";
    cin >> age;

    cout << "Employees name is: " << name << endl;
    if (age > 60)
    {
        cout << "RETIRE";
    }
    else
    {
        cout << "NOT RETIRE";
    }
    return 0;
}