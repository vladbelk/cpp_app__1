#include <iostream>

using namespace std;

int main() {
    int max_num, num;

    cout << "Enter the first number: ";
    cin >> max_num;

    for (int i = 1; i < 7; ++i) {
        cout << "Enter the next number: ";
        cin >> num;

        if (num > max_num) {
            max_num = num;
        }
    }

    cout << "The maximum number is: " << max_num << endl;

    return 0;
}
