#include <iostream>
#include <string>

using namespace std;

string insertCharacterAtIndex(string str, int index, char ch) {
    str.insert(index, 1, ch);
    return str;
}

int main() {
    string str;
    char ch;
    int index;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the character to insert: ";
    cin >> ch;

    cout << "Enter the index to insert the character: ";
    cin >> index;

    if (index >= 0 && index <= str.length()) {
        string result = insertCharacterAtIndex(str, index, ch);
        cout << "Resulting string: " << result << endl;
    }
    else {
        cout << "Error: Invalid index." << endl;
    }

    return 0;
}
