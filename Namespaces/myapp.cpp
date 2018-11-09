#include <iostream>
using namespace std;
#include "mylib.h"
using namespace auebsoft;

float f1(int i) {
	return 100 * i;
}

int main() {
	cout << ::f1(1) << endl//prints 100
		<< auebsoft::f1(1) << endl//0.33333
		<< f2(1) << endl; //prints 10
	//cout << f1(1); //error

	system("Pause");
	return 0;
}