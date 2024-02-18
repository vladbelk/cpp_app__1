#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double distanceMeters, timeMinutes, timeSeconds, totalTimeSeconds, speedMps, speedKmph;

    cout << "Calculation of running speed:" << endl;
    cout << "Enter the distance length (meters): ";
    cin >> distanceMeters;
    if (distanceMeters <= 0) {
        cerr << "Error: Distance must be positive." << endl;
        return 1;
    }
    cout << "Enter time (min. sec): ";
    cin >> timeMinutes >> timeSeconds;
    if (timeMinutes < 0 || timeSeconds < 0 || timeSeconds >= 60) {
        cerr << "Error: Invalid time format. Please enter minutes as positive integers and seconds between 0 and 59." << endl;
        return 1;
    }

    totalTimeSeconds = timeMinutes * 60 + timeSeconds;

    speedMps = distanceMeters / totalTimeSeconds;

    speedKmph = speedMps * 3600 / 1000;
    cout << fixed << setprecision(2);

    cout << "Distance: " << distanceMeters << " m" << endl;
    cout << "Time: " << timeMinutes << " min " << timeSeconds << " sec = " << totalTimeSeconds << " sec" << endl;
    cout << "You ran at a speed of " << speedKmph << " km/h" << endl;

    return 0;
}
