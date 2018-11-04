#include <string>
#include<iostream>
using namespace std;
#pragma once
class Person
{
public:
	Person();
	~Person();
	string name;
	unsigned short year;
	unsigned phone;

	//methods inside class only if its really small
	void greating() {
		cout << "My name is " << name << endl;
	}

	//outside of the class
	void tellAge();
};
