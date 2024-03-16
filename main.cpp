#include <iostream>

int* removeNegatives(int* arr, int& size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] >= 0) {
            count++;
        }
    }

    int* newArr = new int[count];
    int index = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] >= 0) {
            newArr[index++] = arr[i];
        }
    }

    size = count;

    return newArr;
}

int main() {
    int originalArray[] = { -3, 1, -5, 2, 8, -7, 6, -9 };
    int size = sizeof(originalArray) / sizeof(originalArray[0]);

    int* resultArray = removeNegatives(originalArray, size);

    std::cout << "Array after removing negative numbers: ";
    for (int i = 0; i < size; ++i) {
        std::cout << resultArray[i] << " ";
    }
    std::cout << std::endl;

    delete[] resultArray;

    return 0;
}
