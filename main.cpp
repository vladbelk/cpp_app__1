#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double amount;

	cout << "Enter the amount: ";
	cin >> amount;

	int UAH = static_cast<int>(amount);
	int kopecks = static_cast<int>(round((amount - UAH) * 100));

	cout << UAH << " UAH " << setw(2) << setfill('0') << kopecks << " kopecks" << endl;

	return 0;
}