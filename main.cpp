#include <iostream>
#include <string>

using namespace std;

int main() {
    string str;
    int letterCount = 0, digitCount = 0, otherCount = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for (char ch : str) {
        if (isalpha(ch)) {
            letterCount++;
        }
        else if (isdigit(ch)) {
            digitCount++;
        }
        else {
            otherCount++;
        }
    }

    cout << "Number of letters: " << letterCount << endl;
    cout << "Number of digits: " << digitCount << endl;
    cout << "Number of other characters: " << otherCount << endl;

    return 0;
}
