#include <iostream>

using namespace std;
int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int* ptr1 = &num1;
    int* ptr2 = &num2;

    if (*ptr1 > *ptr2) {
        cout << "The greater number is: " << *ptr1 << endl;
    }
    else if (*ptr1 < *ptr2) {
        cout << "The greater number is: " << *ptr2 << endl;
    }
    else {
        cout << "The numbers are equal." << endl;
    }

    return 0;
}