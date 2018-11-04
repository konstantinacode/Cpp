#include "Person.h";
#include<iostream>;
using namespace std;

int main() {
	Person p1, p2;
	p1.name = "Konstantina";
	p2.name = "Eleni";
	p1.year = 1991;
	p2.year = 1987;
	p1.phone = 6991435888;
	p2.phone = 2103347928;

	cout << p1.name << ": " << p1.year << ", " << p1.phone << endl;
	cout << p2.name << ": " << p2.year << ", " << p2.phone << endl;

	cout << "\nSelf-presenting:" << endl;
	p1.greating();
	p1.tellAge();
	p2.greating();
	p2.tellAge();

	system("PAUSE");
	return 0;
}