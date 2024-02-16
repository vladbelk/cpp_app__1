#include <iostream>

using namespace std;

int main() {

	double v;
	cout << "Enter the initial velocity: ";
	cin >> v;

	double t;
	cout << "Enter the time: ";
	cin >> t;

	double a;
	cout << "Enter Acceleration: ";
	cin >> a;

	double S = v * t + (a * t * t) / 2;

	cout << "Distance traveled: " << S << endl;

	return 0;
}