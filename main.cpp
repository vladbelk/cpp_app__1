#include <iostream>

using namespace std;

int main() {
    double R1, R2, R3;
    cout << "Enter a value R1: ";
    cin >> R1;
    cout << "Enter a value R2: ";
    cin >> R2;
    cout << "Enter a value R3: ";
    cin >> R3;

    double R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);

    cout << "Value R0: " << R0 << endl;

    if (R1 == 2 && R2 == 4 && R3 == 8) {
        if (abs(R0 - 1.142857) < 1e-6) {
            cout << "The test case has been completed successfully!" << endl;
        }
        else {
            cout << "The test case failed!" << endl;
        }
    }

    return 0;
}