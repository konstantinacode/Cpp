#include <iostream>

int main() {
	int num1 = 0;
	int num2 = 0;
	int sum = 0;

	std::cout << "Enter first integer: ";
	std::cin >> num1;

	std::cout << "Enter second integer: ";
	std::cin >> num2;

	sum = num1 + num2;

	std::cout << "Sum is " << sum << std::endl;
}