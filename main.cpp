#include <iostream>

void removeElementsAtIndex(int*& arr, int& size, int index, int blockSize) {
    if (index < 0 || index >= size || blockSize <= 0 || index + blockSize > size) {
        std::cerr << "Error: Invalid index or block size." << std::endl;
        return;
    }

    for (int i = index + blockSize; i < size; ++i) {
        arr[i - blockSize] = arr[i];
    }

    size -= blockSize;

    int* newArray = new int[size];
    for (int i = 0; i < size; ++i) {
        newArray[i] = arr[i];
    }

    delete[] arr;

    arr = newArray;
}

int main() {
    int size = 10;
    int* arr = new int[size] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Original array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    int startIndex = 3;
    int blockSize = 4;

    removeElementsAtIndex(arr, size, startIndex, blockSize);

    std::cout << "Array after removing elements:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}
