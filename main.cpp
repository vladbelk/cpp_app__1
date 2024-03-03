#include <iostream>
using namespace std;

int main() {
    const int rows = 3;
    const int cols = 4;
    int matrix[rows][cols] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int sum = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            sum += matrix[i][j];
        }
    }
    cout << "Sum of all elements of the array: " << sum << endl;

    float average = static_cast<float>(sum) / (rows * cols);
    cout << "The arithmetic mean of all elements of the array: " << average << endl;

    int minElement = matrix[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] < minElement) {
                minElement = matrix[i][j];
            }
        }
    }
    cout << "Minimal array element: " << minElement << endl;

    int maxElement = matrix[0][0];
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
    }
    cout << "Maximum array element: " << maxElement << endl;

    return 0;
}
