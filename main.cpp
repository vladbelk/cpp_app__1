#include <iostream>

using namespace std;

int main() {
    int num;

    cout << "Enter a six-digit integer: ";
    cin >> num;

    if (cin.fail() || num < 100000 || num > 999999) {
        cerr << "Error: Invalid input. Please enter a six-digit integer." << endl;
        return 1;
    }

    int first_half = num / 1000;
    int second_half = num % 1000;
    int first_sum = (first_half % 10) + (first_half / 10 % 10) + (first_half / 100);
    int second_sum = (second_half % 10) + (second_half / 10 % 10) + (second_half / 100);

    if (first_sum == second_sum) {
        cout << num << " is a lucky number!" << endl;
    }
    else {
        cout << num << " is not a lucky number." << endl;
    }

    return 0;
}
