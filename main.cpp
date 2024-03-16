#include <iostream>

void count_positives_negatives_zeros(int* arr, int size, int* negative_count, int* zero_count, int* positive_count) {
    *negative_count = 0;
    *zero_count = 0;
    *positive_count = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] < 0) {
            (*negative_count)++;
        }
        else if (arr[i] > 0) {
            (*positive_count)++;
        }
        else {
            (*zero_count)++;
        }
    }
}

int main() {
    int arr[] = { 1, -2, 0, 3, -4, 0 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int negative_count, zero_count, positive_count;

    count_positives_negatives_zeros(arr, size, &negative_count, &zero_count, &positive_count);

    std::cout << "Negative: " << negative_count << std::endl;
    std::cout << "Zero: " << zero_count << std::endl;
    std::cout << "Positive: " << positive_count << std::endl;

    return 0;
}
