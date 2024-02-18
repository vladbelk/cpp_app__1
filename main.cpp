#include <iostream>

int main() {
    int hryvnia, kopecks;
    std::cout << "Enter the amount in hryvnias: ";
    std::cin >> hryvnia;
    std::cout << "Enter the amount in kopecks: ";
    std::cin >> kopecks;

    if (kopecks >= 100) {
        hryvnia += kopecks / 100;
        kopecks %= 100;
    }

    std::cout << "Adjusted amount: " << hryvnia << " UAH " << kopecks << " kopecks\n";
    return 0;
}
