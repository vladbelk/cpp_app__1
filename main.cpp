#include <iostream>
#include <iomanip> // For formatted output

using namespace std;

int main() {
    double length, width, height, volume;

    cout << fixed << setprecision(2);
    cout << "Calculating the volume of a parallelepiped." << endl;
    cout << "Enter the dimensions (in cm):" << endl;
    cout << "Length: ";
    if (!(cin >> length)) {
        cerr << "Error: Invalid input for length. Please enter a real number." << endl;
        return 1;
    }
    cout << "Width: ";
    if (!(cin >> width)) {
        cerr << "Error: Invalid input for width. Please enter a real number." << endl;
        return 1;
    }
    cout << "Height: ";
    if (!(cin >> height)) {
        cerr << "Error: Invalid input for height. Please enter a real number." << endl;
        return 1;
    }

    volume = length * width * height;
 
    cout << endl << "Volume: " << volume << " cubic centimeters." << endl;

    return 0;
}
