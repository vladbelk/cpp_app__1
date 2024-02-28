#include <iostream>

using namespace std;

void reverseCopyArray(int* source, int* destination, int size) {
    int* ptrSource = source + size - 1;
    int* ptrDestination = destination;

    for (int i = 0; i < size; i++) {
        *ptrDestination = *ptrSource;
        ptrSource--;
        ptrDestination++;
    }
}

int main() {
    int source[] = { 1, 2, 3, 4, 5 };
    int destination[5];
    int size = sizeof(source) / sizeof(source[0]);

    reverseCopyArray(source, destination, size);

    for (int i = 0; i < size; i++) {
        cout << destination[i] << " ";
    }

    cout << endl;

    return 0;
}
