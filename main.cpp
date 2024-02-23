#include <iostream>
using namespace std;

int main() {
    double inputNumber;
    cout << "Enter a number: ";
    cin >> inputNumber;

    if (fmod(inputNumber, 2) == 0) {
        double result = inputNumber * 3;
        cout << "The number is even. Result after multiplying by 3: " << result << endl;
    }
    else {
        double result = inputNumber / 2;
        cout << "The number is odd. Result after dividing by 2: " << result << endl;
    }

    return 0;
}
