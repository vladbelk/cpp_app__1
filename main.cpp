#include <iostream>

int* is_subset(int* arr_a, int len_a, int* arr_b, int len_b) {
    if (len_b == 0) {
        return arr_a;
    }

    for (int i = 0; i < len_a; i++) {
        if (arr_a[i] == arr_b[0]) {
            int j = 1;
            while (j < len_b && i + j < len_a && arr_a[i + j] == arr_b[j]) {
                j++;
            }
            if (j == len_b) {
                return arr_a + i;
            }
        }
    }
    return nullptr;
}

int main() {
    int arr_a[] = { 1, 2, 3, 4, 5 };
    int arr_b[] = { 2, 3 };
    int* subset_start = is_subset(arr_a, sizeof(arr_a) / sizeof(arr_a[0]), arr_b, sizeof(arr_b) / sizeof(arr_b[0]));

    if (subset_start != nullptr) {
        std::cout << "Array B is a subset of array A starting at: " << subset_start << std::endl;
    }
    else {
        std::cout << "Array B is not a subset of array A" << std::endl;
    }

    return 0;
}
