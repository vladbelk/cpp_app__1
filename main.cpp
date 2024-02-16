#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double L;
	cout << "Enter the circumference: ";
	cin >> L;

	double pi = 3.141592653589793;
	double R = L / (2 * pi);

	double S = pi * R * R;

	cout << "Circumference: " << S << endl;

	return 0;
}
