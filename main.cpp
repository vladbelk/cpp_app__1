#include <iostream>

using namespace std;

int main() {
    int days;

    cout << "Enter the number of days: ";
    cin >> days;

    if (days < 0) {
        cout << "Error: Please enter a non-negative number of days." << endl;
        return 1;
    }

    int weeks = (days + 6) / 7;
    int remainingDays = days % 7;

    cout << days << " days is equal to " << weeks << " weeks and " << remainingDays << " days." << endl;

    return 0;
}
