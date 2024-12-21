#include <bits/stdc++.h>
using namespace std;

int main()
{

    double number_1, number_2, result;
    char operation;

    // Input two numbers
    cout << "Enter the first number: ";
    cin >> number_1;

    cout << "Enter the second number: ";
    cin >> number_2;

    // Choose operation
    cout << "Choose an operation (+, -, *, /): ";
    cin >> operation;

    // Perform operation
    switch (operation)
    {

    case '+':
        result = number_1 + number_2;
        cout << "Result: " << result << endl;
        break;

    case '-':
        result = number_1 - number_2;
        cout << "Result: " << result << endl;
        break;

    case '*':
        result = number_1 * number_2;
        cout << "Result: " << result << endl;
        break;

    case '/':
        if (number_2 != 0)
        {
            result = number_1 / number_2;
            cout << "Result: " << result << endl;
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
        break;

    default:
        cout << "Invalid operation. Please choose +, -, *, or /." << endl;
    }

    return 0;
}
