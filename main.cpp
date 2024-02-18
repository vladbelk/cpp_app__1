#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double distance, time_minutes, time_seconds, total_time_seconds, speed_ms, speed_kmh;

	cout << "Calculation of running speed:" << endl;

	cout << "Enter the distance length (meters) = ";
	cin >> distance;

	cout << "Enter time (min. sec) = ";
	cin >> time_minutes >> time_seconds;

	total_time_seconds = time_minutes * 60 + time_seconds;

	speed_ms = distance / total_time_seconds;

	speed_kmh = speed_ms * 3600 / 1000;

	cout << "Distance: " << distance << " m" << endl;
	cout << "Hour: " << fixed << setprecision(0) << time_minutes << " min " << setprecision(2) << time_seconds << " sec = " << total_time_seconds << " sec" << endl;
	cout << "You ran at a speed of " << setprecision(2) << speed_kmh << " km/h" << endl;

	return 0;
}