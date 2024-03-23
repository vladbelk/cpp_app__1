#include <iostream>
#include <cctype>

using namespace std;

int main() {
    string str = "This is a string with characters 1234 and special characters !@#$%^&*()";

    int letters = 0, digits = 0, otherChars = 0;

    for (char c : str) {
        if (isalpha(c)) {
            letters++;
        }
        else if (isdigit(c)) {
            digits++;
        }
        else if (!isspace(c)) {
            otherChars++;
        }
    }

    cout << "Number of letters: " << letters << endl;
    cout << "Number of digits: " << digits << endl;
    cout << "Number of other characters: " << otherChars << endl;

    return 0;
}
