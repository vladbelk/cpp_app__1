#include <iostream>

int main() {
    int year;
    std::cout << "Enter a year: ";
    std::cin >> year;

    int days = 365 + ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));

    std::cout << "In " << year << " year = " << days << " days\n";
    return 0;
}
