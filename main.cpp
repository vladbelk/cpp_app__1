#include <iostream>
#include <string>

using namespace std;

string removeAllOccurrences(string str, char ch) {
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] == ch) {
            str.erase(i, 1);
            i--;
        }
    }
    return str;
}

int main() {
    string str;
    char ch;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the character to remove: ";
    cin >> ch;

    string result = removeAllOccurrences(str, ch);
    cout << "Resulting string: " << result << endl;

    return 0;
}
