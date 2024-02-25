#include <iostream>

int main() {
	int a = 10;
	int b = 20;

	int* ptr_a = &a;
	int* ptr_b = &b;

	int temp = *ptr_a;
	*ptr_a = *ptr_b;
	*ptr_b = temp;

	std::cout << "The value of A after the change: " << a << std::endl;
	std::cout << "The value of B after the change " << b << std::endl;

	return 0;
}
