#include <iostream>

void addElementsToEnd(int*& arr, int& size, const int* elements, int blockSize) {

    int newSize = size + blockSize;
    int* newArray = new int[newSize];

    for (int i = 0; i < size; ++i) {
        newArray[i] = arr[i];
    }

    for (int i = 0; i < blockSize; ++i) {
        newArray[size + i] = elements[i];
    }

    delete[] arr;
    arr = newArray;
    size = newSize;
}

int main() {
    int size = 5;
    int* arr = new int[size] {1, 2, 3, 4, 5};

    std::cout << "Original array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int newElements[] = { 6, 7, 8 };
    int blockSize = sizeof(newElements) / sizeof(newElements[0]);

    addElementsToEnd(arr, size, newElements, blockSize);

    std::cout << "Array after adding new elements:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}
