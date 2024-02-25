#include <iostream>

int main() {
    int number;
    int* ptr = &number;

    std::cout << "Enter a number: ";
    std::cin >> *ptr;

    if (*ptr > 0) {
        std::cout << "The number is positive." << std::endl;
    }
    else if (*ptr < 0) {
        std::cout << "The number is negative." << std::endl;
    }
    else {
        std::cout << "The number is zero." << std::endl;
    }

    return 0;
}