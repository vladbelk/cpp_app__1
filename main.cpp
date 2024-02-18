#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double mapScale, distanceInCm, actualDistance;

    cout << "Calculation of the distance between settlements." << endl;
    cout << "Enter the initial data:" << endl;
    cout << "Map scale (number of kilometers in one centimeter): ";
    if (!(cin >> mapScale)) {
        cerr << "Error: Invalid input for map scale. Please enter a positive number." << endl;
        return 1;
    }
    if (mapScale <= 0) {
        cerr << "Error: Map scale must be positive." << endl;
        return 1;
    }
    cout << "Distance between the points that depict settlements (cm): ";
    if (!(cin >> distanceInCm)) {
        cerr << "Error: Invalid input for distance. Please enter a positive number." << endl;
        return 1;
    }
    if (distanceInCm <= 0) {
        cerr << "Error: Distance between settlements must be positive." << endl;
        return 1;
    }

    actualDistance = mapScale * distanceInCm;

    cout << endl << "The distance between settlements is " << actualDistance << " kilometers." << endl;

    return 0;

}
