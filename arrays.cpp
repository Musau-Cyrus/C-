#include <iostream>
using namespace std;

int main()
{
    int const SIZE = 5;
    float arr[SIZE];
    float sum = 0;
    int i = 0;

    while (i < SIZE)
    {
        cout << "Value: " << (i + 1) << ";";
        cin >> arr[i];
        sum += arr[i];
        i++;
    }

    float avarage = sum / SIZE;
    cout << "\nAvarage: " << avarage << endl;

    return 0;
}