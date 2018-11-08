#include<string>
#include<iostream>
using namespace std;

class MultiPerson {
	unsigned howManyNames;
	string* names;
public:
	MultiPerson(unsigned num = 1);
	~MultiPerson(); //Destroyer
	void setName(unsigned i, const string& n) {
		names[i] = n;
	}
	string getName(unsigned i) const {
		return names[i];
	}
};

MultiPerson::MultiPerson(unsigned num)
{
}

MultiPerson::~MultiPerson() {
	cout << "deleting" << endl;
	delete[]names;
}

void f() {
	MultiPerson p(2);
	p.setName(0, "John");
	p.setName(1, "George");
}//now the destroyer is called
