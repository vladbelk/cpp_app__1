#include <iostream>
#include <iomanip>

const int ROWS = 3;
const int COLS = 4;

void sumRows(int arr[][COLS], int rowSum[]) {
    for (int i = 0; i < ROWS; ++i) {
        rowSum[i] = 0;
        for (int j = 0; j < COLS; ++j) {
            rowSum[i] += arr[i][j];
        }
    }
}

void sumColumns(int arr[][COLS], int colSum[]) {
    for (int j = 0; j < COLS; ++j) {
        colSum[j] = 0;
        for (int i = 0; i < ROWS; ++i) {
            colSum[j] += arr[i][j];
        }
    }
}

int totalSum(int arr[][COLS]) {
    int total = 0;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            total += arr[i][j];
        }
    }
    return total;
}

int main() {
    int arr[ROWS][COLS] = { {3, 5, 6, 7},
                            {12, 1, 1, 1},
                            {0, 7, 12, 1} };

    int rowSum[ROWS];
    int colSum[COLS];

    sumRows(arr, rowSum);
    sumColumns(arr, colSum);

    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            std::cout << std::setw(2) << arr[i][j] << " ";
        }
        std::cout << "| " << rowSum[i] << std::endl;
    }

    for (int j = 0; j < COLS; ++j) {
        std::cout << "---";
    }
    std::cout << "|----" << std::endl;

    for (int j = 0; j < COLS; ++j) {
        std::cout << std::setw(2) << colSum[j] << " ";
    }
    std::cout << "| " << totalSum(arr) << std::endl;

    return 0;
}
