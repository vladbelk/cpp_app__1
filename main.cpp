#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int countWords(string str) {
    stringstream ss(str);
    string word;
    int count = 0;
    while (ss >> word) {
        count++;
    }
    return count;
}

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int wordCount = countWords(sentence);
    cout << "Number of words: " << wordCount << endl;

    return 0;
}
