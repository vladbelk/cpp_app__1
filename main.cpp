#include <iostream>
#include <string>

using namespace std;

string replaceDotsWithExclamation(string str) {
    for (char& c : str) {
        if (c == '.') {
            c = '!';
        }
    }
    return str;
}

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    string result = replaceDotsWithExclamation(str);
    cout << "Resulting string: " << result << endl;

    return 0;
}
