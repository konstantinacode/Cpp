#include "Person.h"
#include<iostream>
using namespace std;


Person::Person()
{
}


Person::~Person()
{
}

void Person::tellAge()
{
	int age = 2018 - year;
	cout << "I am " << age << " years old\n" << endl;
}

/*void Person::greating(){
	cout << "My name is " << name << endl;
}*/
