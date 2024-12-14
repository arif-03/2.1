#include <iostream>
using namespace std;
int main()
{
    int num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    switch (operation)
    {
    case '+':
        cout << "Addition: " << num1 + num2 << endl;
        break;
    case '-':
        cout << "Subtraction: " << num1 - num2 << endl;
        break;
    case '*':
        cout << "Multiplication: " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
        {
            cout << "Division: " << num1 / num2 << endl;
        }
        else
        {
            cout << "Cannot divide by zero!" << endl;
        }
        break;
    default:
        cout << "Invalid operation!" << endl;
    }

    return 0;
}