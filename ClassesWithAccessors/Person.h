#include<string>
#include<iostream>

using namespace std;

#pragma once
class Person
{
/*public:
	Person();
	~Person();
	*/
private:
	string name;
	unsigned short year;
	//void test();
public:
	//void setData(const string& n, unsigned short y);
	void setName(const string& n) {
		name = n;
	}
	void setYear(unsigned short y) {
		year = y;
	}
	void print() {
		cout << name << ": " << year << endl;
	}
	Person(const string& n, unsigned short y);
	/*Person(){
		name = " ";
		year = 0;
	}*/
	Person() : 
		name("unspecified"), year(1)
	{}
};

