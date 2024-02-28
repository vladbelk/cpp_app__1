#include <iostream>

using namespace std;

void reverseArray(int* arr, int size) {
    int* ptrStart = arr;
    int* ptrEnd = arr + size - 1;

    int temp;

    while (ptrStart < ptrEnd) {
        temp = *ptrStart;
        *ptrStart = *ptrEnd;
        *ptrEnd = temp;

        ptrStart++;
        ptrEnd--;
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}
