#include <iostream>

using namespace std;

int main() {
    int* x = new int;
    int* y = new int;
    
    cout << "Enter the first number: ";
    cin >> *x;

    cout << "Enter the second number: ";
    cin >> *y;

    if (*x > *y) {
        cout << "The greater number is: " << *x << endl;
    }
    else if (*x < *y) {
        cout << "The greater number is: " << *y << endl;
    }
    else {
        cout << "The numbers are equal." << endl;
    }

    return 0;
}