#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double radius;

    cout << "Enter the radius of the sphere (cm): ";
    cin >> radius;

    if (radius <= 0) {
        cerr << "Error: Radius must be a positive number." << endl;
        return 1;
    }

    const double pi = 3.14159;
    double volume = 4.0 / 3.0 * pi * pow(radius, 3);

    cout << "The volume of the sphere is: " << volume << " cubic centimeters." << endl;

    return 0;
}
