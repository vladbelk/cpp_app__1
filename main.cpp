#include <iostream>

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) return false;
    }
    return true;
}

int* removePrimes(int* arr, int& size) {
    int newSize = 0;
    for (int i = 0; i < size; ++i) {
        if (!isPrime(arr[i])) {
            ++newSize;
        }
    }

    int* newArr = new int[newSize];
    int index = 0;
    for (int i = 0; i < size; ++i) {
        if (!isPrime(arr[i])) {
            newArr[index++] = arr[i];
        }
    }

    size = newSize;

    delete[] arr;

    return newArr;
}

int main() {
    int size = 10;
    int* arr = new int[size] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    std::cout << "Original array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    arr = removePrimes(arr, size);

    std::cout << "Array after removing prime numbers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    delete[] arr;

    return 0;
}
