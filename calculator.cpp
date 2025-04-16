#include <iostream>
using namespace std;

int main()
{
    int choice;
    int num1, num2, result;
    char continueCalc;

    do
    {
        cout << "Enter the First number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        cout << "Enter a choice:\n"
                "1. Add\n"
                "2. Subtract\n"
                "3. Multiply\n"
                "4. Divide\n"
                "5. Modulus"
             << endl;
        cin >> choice;
        if (choice == 1)
        {
            result = num1 + num2;
            cout << "Result: " << result << endl;
        }
        else if (choice == 2)
        {
            result = num1 - num2;
            cout << "Result: " << result << endl;
        }
        else if (choice == 3)
        {
            result = num1 * num2;
            cout << "Result: " << result << endl;
        }
        else if (choice == 4)
        {
            result = num1 / num2;
            cout << "Result: " << result << endl;
        }
        else if (choice == 5)
        {
            result = num1 % num2;
            cout << "Result: " << result << endl;
        }
        else
        {
            cout << "Invalid Choice!" << endl;
        }
        cout << "Do you want to continue with this operation?";
        cin >> continueCalc;
    } while (continueCalc == 'y' || continueCalc == 'Y');

    return 0;
}