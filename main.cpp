#include <iostream>
#include <stdexcept>

int* insertElementsAtIndex(int* arr, int& size, int index, const int* elements, int blockSize) {
    if (blockSize <= 0) {
        std::cerr << "Error: Invalid block size." << std::endl;
        return arr;
    }

    if (index < 0 || index > size) {
        std::cerr << "Error: Invalid insertion index." << std::endl;
        return arr;
    }

    try {
        int newSize = size + blockSize;
        int* newArray = new int[newSize];

        for (int i = 0; i < index; ++i) {
            newArray[i] = arr[i];
        }

        for (int i = 0; i < blockSize; ++i) {
            newArray[index + i] = elements[i];
        }

        for (int i = index; i < size; ++i) {
            newArray[i + blockSize] = arr[i];
        }

        size = newSize;

        delete[] arr;

        return newArray;
    }
    catch (std::bad_alloc& e) {
        std::cerr << "Error: Memory allocation failed." << std::endl;
        return arr;
    }
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
    int insertionIndex = 2;

    int* newArray = insertElementsAtIndex(arr, size, insertionIndex, newElements, blockSize);

    if (newArray != arr) {
        std::cout << "Array after inserting new elements:" << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cout << newArray[i] << " ";
        }
        std::cout << std::endl;

        delete[] newArray;
    }

    delete[] arr;

    return 0;
}
