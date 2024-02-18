#include <iostream>

int main() {
    double length, width, height;

    std::cout << "Enter the length of the parallelepiped (in centimeter): ";
    std::cin >> length;
    std::cout << "Enter the width of the parallelepiped (in centimeter): ";
    std::cin >> width;
    std::cout << "Enter the height of the parallelepiped (in centimeter): ";
    std::cin >> height;

    double volume = length * width * height;

    std::cout << "The volume of the parallelepiped is: " << volume << " cubic meters\n";

    return 0;
}
