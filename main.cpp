#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double amount;

	cout << "Enter the amount: ";
	cin >> amount;

	int grn = static_cast<int>(amount);
	int kopijoc = static_cast<int>(round((amount - grn) * 100));

	cout << grn << " grn " << setw(2) << setfill('0') << kopijoc << " kopijoc" << endl;

	return 0;
}