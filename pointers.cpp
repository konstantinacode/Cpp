#include<iostream>
using namespace std;

int main() {
	int a = 7;
	int *aPtr = &a;

	cout << "The address of a is " << &a
		<< "\nThe value of aPtr is " << aPtr;
	cout << "\n\nThe value of a is " << a
		<< "\nThe value of *aPtr is " << *aPtr << endl;

	int i = 5;
	cout << i << endl; //prints 5
	cout << &i << endl; //prints the address of i

	int *p = &i;
	cout << p << endl; //prints the address
	cout << *p << endl; //prints 5

	*p = 6; //changes the i 
	cout << i << endl; //prints 6

	int j = 10;
	p = &j;
	cout << *p << endl; //prints 10

	a = 10;
	int *p_a = &a;
	cout << p_a << endl;
	p_a += 1; //changes 1 int (4bytes)
	cout << p_a << endl;

	system("PAUSE");
	return 0;
}