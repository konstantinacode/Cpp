#include "Person.h"

int main() {
	Person p1; //calls the default constructor
	Person p2 = Person("George", 1975);
	//p1.setData("Aris", 1987);
	//p2.setData("Eleni", 1987);

	p1.print();
	p2.print();

	system("PAUSE");
	return 0;
}