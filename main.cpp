#include <iostream>

using namespace std;

int main() {
    int source[] = { 1, 2, 3, 4, 5 };
    int destination[5];
    int size = sizeof(source) / sizeof(source[0]);

    int* ptrSource = source;
    int* ptrDestination = destination;

    for (int i = 0; i < size; i++) {
        *ptrDestination = *ptrSource;
        ptrSource++;
        ptrDestination++;
    }

    for (int i = 0; i < size; i++) {
        cout << destination[i] << " ";
    }

    cout << endl;

    return 0;
}
