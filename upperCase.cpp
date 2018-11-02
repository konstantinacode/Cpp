#include <iostream>
using namespace std;

char toUpperCase(char input) {
	if (input >= 'a' && input <= 'z')
		return input - 32;
	else
		return input;
}

int main() {
	char uppercase = toUpperCase('v');
	cout << uppercase << endl;

	char c = 77; //ASCII: M
	cout <<"\n"<< c << endl; //prints M
	c++;
	cout << c << endl; //prints N
	cin >> c; //write F (c=70)
	cout << c << endl; //prints F
	cout << c + 0 << endl; //prints 70

	size_t sz = sizeof(float); //size_t defined in crtdefs.h
	cout << "\n" << sz << endl; //4

	typedef struct {
		float a;
		char b;
	} Data;

	sz = sizeof(Data);
	cout << "\n" << sz << endl; //8! not 4+1

	system("PAUSE");
	return 0;
}