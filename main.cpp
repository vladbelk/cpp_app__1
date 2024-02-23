#include <iostream>
using namespace std;

int main() {
    int inputNumber;
    cout << "Enter a four-digit number: ";
    cin >> inputNumber;

    if (inputNumber < 1000 || inputNumber > 9999) {
        cout << "Error: Please enter a valid four-digit number." << endl;
        return 1;
    }

    int digit1 = inputNumber / 1000;
    int digit2 = (inputNumber / 100) % 10;
    int digit3 = (inputNumber / 10) % 10;
    int digit4 = inputNumber % 10;

    int newNumber = digit2 * 1000 + digit1 * 100 + digit4 * 10 + digit3;

    cout << "Original number: " << inputNumber << endl;
    cout << "Modified number: " << newNumber << endl;

    return 0;
}
