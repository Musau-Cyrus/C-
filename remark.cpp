// Program that takes in marks in 4 subjects and outputs the avarage then grade

#include <iostream>
using namespace std;

int main()
{
    float mark[4], sum = 0, avg;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Marks: ";
        cin >> mark[i];
        sum += mark[i];
    }
    avg = sum / 4;
    cout << "The avarage is: " << avg << endl;

    if (avg >= 70 && avg <= 100)
    {
        cout << "Grade: " << 'A' << endl;
        cout << "Excellent" << endl;
    }
    else if (avg >= 60 && avg <= 69)
    {
        cout << "Grade: " << 'B' << endl;
        cout << "Good" << endl;
    }
    else if (avg >= 50 && avg <= 59)
    {
        cout << "Grade: " << 'C' << endl;
        cout << "Satisfactory" << endl;
    }
    else if (avg >= 40 && avg <= 49)
    {
        cout << "Grade: " << 'D' << endl;
        cout << "Pass" << endl;
    }
    else
    {
        cout << "Grade: " << 'F' << endl;
        cout << "Fail" << endl;
    }
    return 0;
}