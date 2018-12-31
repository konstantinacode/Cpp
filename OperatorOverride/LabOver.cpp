#include "Complex.h"

//This example will demonstrate operator overloading on a simple C++ class.

int main(){

	//declare two complex numbers
	Complex a;
	Complex b;
	
	//ask the user for the numbers
	cout<<"Give the first complex number:";
	cin>>a;
	cout<<"Give the second complex number:";
	cin>>b;
	
	//do some math and print the results
	cout << a << " + " << b << " = " << a + b << endl;
	cout << a << " - " << b << " = " << a - b << endl;
	cout << a << " * " << b << " = " << a * b << endl;
	cout << a << " / " << b << " = " << a / b << endl;
	cout << a << " == " << b << " :: " << (a == b) << endl;
	system("pause");
	return 0;
}