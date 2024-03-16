#include <iostream>

using namespace std;

void sum_and_product(int* arr, int size, int* sum, int* product) {
    *sum = 0;
    *product = 1;
    for (int i = 0; i < size; i++) {
        *sum += arr[i];
        *product *= arr[i];
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum, product;

    sum_and_product(arr, size, &sum, &product);

    cout << "Amount: " << sum << endl;
    cout << "Product: " << product << endl;

    return 0;
}
