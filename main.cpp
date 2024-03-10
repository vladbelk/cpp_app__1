#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

int main() {
    int userNumber;
    cout << "Enter a number: ";
    cin >> userNumber;

    int myArray[ROWS][COLS];

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (i == 0) {
                myArray[i][j] = userNumber;
            }
            else {
                myArray[i][j] = myArray[i - 1][j] * 2;
            }
        }
    }

    cout << "Created array:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << myArray[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
