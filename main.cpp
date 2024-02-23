#include <iostream>

using namespace std;

int main() {
    double num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 == num2) {
        cout << "The numbers are equal." << endl;
    }
    else {
        if (num1 > num2) {
            swap(num1, num2);
        }

        cout << "The numbers in ascending order are: " << num1 << " " << num2 << endl;
    }

    return 0;
}
