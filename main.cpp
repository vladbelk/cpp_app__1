#include <iostream>
#include <string>

using namespace std;

int countOccurrences(const string& str, char target) {
    int count = 0;
    for (char ch : str) {
        if (ch == target) {
            count++;
        }
    }
    return count;
}

int main() {
    string str;
    char target;

    cout << "Enter a string: ";
    getline(cin, str);

    cout << "Enter the character to search for: ";
    cin >> target;

    int occurrences = countOccurrences(str, target);
    cout << "The character '" << target << "' occurs " << occurrences << " times in the string." << endl;

    return 0;
}
