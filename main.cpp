#include <iostream>

using namespace std;

int main() {
    double num1, num2;
    char operation;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Select an operation (+, -, *, /): ";
    cin >> operation;

    if (operation != '+' && operation != '-' && operation != '*' && operation != '/') {
        cout << "Invalid operation!" << endl;
        return 1;
    }

    double result;
    switch (operation) {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        if (num2 == 0) {
            cout << "Error: Division by zero!" << endl;
            return 1;
        }
        result = num1 / num2;
        break;
    default:
        cout << "Unexpected error!" << endl;
        return 1;
    }

    cout << "The result is: " << result << endl;

    return 0;
}
