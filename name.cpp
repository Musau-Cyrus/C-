// Program that uses getline() to uotput a sentence with white spaces

#include <iostream>
using namespace std;

int main()
{
    string name;
    cout << "Enter Your name: ";
    getline(cin, name);

    cout << "Your Name is: " << name << endl;

    return 0;
}