#include <iostream>

void splitElements(int* staticArr, int size, int*& positiveArr, int& positiveSize,
    int*& negativeArr, int& negativeSize, int*& zeroArr, int& zeroSize) {
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    for (int i = 0; i < size; ++i) {
        if (staticArr[i] > 0) {
            ++positiveCount;
        }
        else if (staticArr[i] < 0) {
            ++negativeCount;
        }
        else {
            ++zeroCount;
        }
    }

    positiveArr = new int[positiveCount];
    negativeArr = new int[negativeCount];
    zeroArr = new int[zeroCount];

    positiveSize = 0, negativeSize = 0, zeroSize = 0;
    for (int i = 0; i < size; ++i) {
        if (staticArr[i] > 0) {
            positiveArr[positiveSize++] = staticArr[i];
        }
        else if (staticArr[i] < 0) {
            negativeArr[negativeSize++] = staticArr[i];
        }
        else {
            zeroArr[zeroSize++] = staticArr[i];
        }
    }
}

int main() {
    const int size = 10;
    int staticArr[size] = { 3, -1, 0, 4, -5, 2, 0, 8, -6, 1 };

    int* positiveArr = nullptr;
    int positiveSize = 0;
    int* negativeArr = nullptr;
    int negativeSize = 0;
    int* zeroArr = nullptr;
    int zeroSize = 0;

    splitElements(staticArr, size, positiveArr, positiveSize, negativeArr, negativeSize, zeroArr, zeroSize);

    std::cout << "Positive elements:" << std::endl;
    for (int i = 0; i < positiveSize; ++i) {
        std::cout << positiveArr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Negative elements:" << std::endl;
    for (int i = 0; i < negativeSize; ++i) {
        std::cout << negativeArr[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "Zero elements:" << std::endl;
    for (int i = 0; i < zeroSize; ++i) {
        std::cout << zeroArr[i] << " ";
    }
    std::cout << std::endl;

    delete[] positiveArr;
    delete[] negativeArr;
    delete[] zeroArr;

    return 0;
}
