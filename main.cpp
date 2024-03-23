#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isPalindrome(string str) {
    str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());

    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    return str == reversedStr;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    if (isPalindrome(str)) {
        cout << "The string \"" << str << "\" is a palindrome." << endl;
    }
    else {
        cout << "The string \"" << str << "\" is not a palindrome." << endl;
    }

    return 0;
}
