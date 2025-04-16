#include <iostream>
using namespace std;

int main()
{
    int num = 25;
    int *ptr = &num; // ptr stores the address of num

    cout << "Value of num: " << num << endl;
    cout << "Address of num: " << &num << endl;
    cout << "Value stored in ptr: " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    return 0;
}
