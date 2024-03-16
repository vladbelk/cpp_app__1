#include <iostream>

int* allocateMemory(int size) {
    return new int[size];
}

void initializeArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] = 0;
    }
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void deleteArray(int*& arr) {
    delete[] arr;
    arr = nullptr;
}

void appendElement(int*& arr, int& size, int element) {
    int newSize = size + 1;
    int* newArray = new int[newSize];

    for (int i = 0; i < size; ++i) {
        newArray[i] = arr[i];
    }

    newArray[size] = element;

    delete[] arr;

    arr = newArray;
    size = newSize;
}

void insertElementAtIndex(int*& arr, int& size, int index, int element) {
    if (index < 0 || index > size) {
        std::cerr << "Error: Invalid index." << std::endl;
        return;
    }

    int newSize = size + 1;
    int* newArray = new int[newSize];

    for (int i = 0; i < index; ++i) {
        newArray[i] = arr[i];
    }

    newArray[index] = element;

    for (int i = index; i < size; ++i) {
        newArray[i + 1] = arr[i];
    }

    delete[] arr;

    arr = newArray;
    size = newSize;
}

void removeElementAtIndex(int*& arr, int& size, int index) {
    if (index < 0 || index >= size) {
        std::cerr << "Error: Invalid index." << std::endl;
        return;
    }

    int newSize = size - 1;
    int* newArray = new int[newSize];

    for (int i = 0; i < index; ++i) {
        newArray[i] = arr[i];
    }

    for (int i = index + 1; i < size; ++i) {
        newArray[i - 1] = arr[i];
    }

    delete[] arr;

    arr = newArray;
    size = newSize;
}

int main() {
    int size = 5;
    int* arr = allocateMemory(size);
    initializeArray(arr, size);

    appendElement(arr, size, 1);
    appendElement(arr, size, 2);
    appendElement(arr, size, 3);
    appendElement(arr, size, 4);
    appendElement(arr, size, 5);

    std::cout << "Array after appending elements: ";
    printArray(arr, size);

    insertElementAtIndex(arr, size, 2, 10);

    std::cout << "Array after inserting element at index 2: ";
    printArray(arr, size);

    removeElementAtIndex(arr, size, 3);

    std::cout << "Array after removing element at index 3: ";
    printArray(arr, size);

    deleteArray(arr);

    return 0;
}
