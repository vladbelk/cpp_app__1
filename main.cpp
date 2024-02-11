#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;


int main()
{
	double y, x;
	cout << "Enter x: ";
	cin >> x;

	y = pow(sin(x), 2) + 4 * cos(x);
	cout << "y = " << y << endl;
	_getch();
	system("pause");
	return 0;
}

