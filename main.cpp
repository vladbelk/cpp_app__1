#include <iostream>
#include <string>

using namespace std;

string removeCharacterAtIndex(string str, int index) {
    if (index >= 0 && index < str.length()) {
        str.erase(index, 1);
        return str;
    }
    else {
        cout << "Error: Invalid index." << endl;
        return str;
    }
}

int main() {
    string str;
    int index;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the index of the character to remove: ";
    cin >> index;

    string result = removeCharacterAtIndex(str, index);
    cout << "Resulting string: " << result << endl;

    return 0;
}
