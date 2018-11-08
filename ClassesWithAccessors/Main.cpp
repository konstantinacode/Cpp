#include "Person.h"

void someFunction();
int main() {
	Person p1; //calls the default constructor
	Person p2 = Person("George", 1975);
	//p1.setData("Aris", 1987);
	//p2.setData("Eleni", 1987);

	p1.print(); //prints "unspecified: 1"
	p2.print(); //prints "George: 1974"

	someFunction();

	system("PAUSE");
	return 0;
}

void someFunction() {
	Person p1, p2("John", 1975);
	Person* q1 = new Person; 
	Person* q2 = new Person("Maria", 1984);
	p1.print(); //prints "unspecified: 1"
	p2.print(); //prints "John: 1975"
	(*q1).print(); //prints "unspecified: 1"
	q1->print(); //it's the same as the previous one
	(*q2).print(); //prints "Maria: 1984"
	q2->print(); //as before
	delete q1;
	delete q2;
}
