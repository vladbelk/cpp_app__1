#include <iostream>
#include <windows.h>

using namespace std;

int main() {
	cout << "\033[3mKraj lukomor'a dub zelenyj," << endl;
	Beep(750, 300);

	cout << "\033[3mI zolotyj lancyuh na nim:" << endl;
	Beep(750, 300);

	cout << "\033[3mShodnya, shonochi kit uchenyj" << endl;
	Beep(750, 300);

	cout << "\033[3mNa lancyuhu kruzhl'aje tim" << endl;

	return 0;
}