#include <iostream>

using namespace std;

int main() {
	double num1, num2;

	cout << "Enter the first number: ";
	cin >> num1;

	cout << "Enter the second number: ";
	cin >> num2;

	double smaller_num = (num1 < num2) ? num1 : num2;

	cout << "The smaller number is: " << smaller_num << endl;

	return 0;
}
