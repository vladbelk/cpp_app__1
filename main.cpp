#include <iostream>

using namespace std;

int main() {
	long long seconds;
	
	cout << "Enter the time in seconds: ";
	cin >> seconds;

	int hours = seconds / 3600;
	int minutes = (seconds % 3600) / 60;
	seconds %= 60;

	cout << hours << " hours " << minutes << " minutes " << seconds << " seconds" << endl;

	return 0;
}