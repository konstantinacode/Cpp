#include<iostream>
#include "Vector.h"
using namespace std;

int main() {
	Vector v1, v2;
	v1.setCoordinates(0, 3);
	v2.setCoordinates(-2, 5);
	v1.setCoordinates(0, 0);

	if (v1.length() > 0.0f)
		cout << v2.length() / v1.length();

	system("PAUSE");
	return 0;
}