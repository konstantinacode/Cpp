#include <iostream>
#include <iomanip>

#include "simpleInheritance.h"

using namespace std;

/* Access Control and Inheritance:
	*
	* A derived class can access all the non-private members of its base class. Thus base-class members that
	* should not be accessible to the member functions of derived classes should be declared private in the base class.
	* We can summarize the different access types according to who can access them in the following way:
	*
	* ----------------------------------------------------
	* Access 				public 		protected	private
	* Same class			yes			yes			yes
	* Derived classes		yes			yes			no
	* Outside classes		yes			no			no
	* ----------------------------------------------------
	*
	* A derived class inherits all base class methods with the following exceptions:
	* Constructors, destructors and copy constructors of the base class.
	* Overloaded operators of the base class.
	* The friend functions of the base class.
	*
	* Type of inheritance: Public, Protected or Private
	*
	* Public:		public members of the base class are now public in the derived class
    *				protected members of the base class are now protected in the derived class
	*				private members are not accessible fron the derived class (you can access them though
	*				the public and protected members inherited by the base class)
	*
	* Protected:	public members of the base class are protected in the derived class
    *				protected members of the base class are now protected in the derived class
	*				private members are not accessible fron the derived class (you can access them though
	*				the protected members inherited by the base class)
	*
	* Private:		public members of the base class are private in the derived class
    *				protected members of the base class are now private in the derived class
	*				private members are not accessible fron the derived class (you can access them though
	*				the private members inherited by the base class)
	*
	*
	* In principle, a derived class inherits every member of a base class except:
	*		- its constructor and its destructor
    *		- its operator=() members
    *		- its friends
	*
	*/

//#define SIMPLE_INHERITANCE
//#define VIRTUAL_FUNCTIONS
#define SIMPLE_INHERITANCE

int main ( int argc, char *argv[] ) {
#ifdef SIMPLE_INHERITANCE
	SI::Point A(5,10);
	SI::LabeledPoint B(0,6,"Label");

	cout << endl << "@@@ Simple Inheritance Example - START" << endl << endl;
	cout << "Point A display :: " << endl;
	A.display();
	cout << endl;
	cout << "LabeledPoint B display :: " << endl;
	B.display();
	cout << endl;

	// TODO: write some code to invoke the Copy-Constructor of Class LabeledPoint
	SI::LabeledPoint C(B);
	cout << "LabeledPoint C display :: " << endl;
	C.display();
	cout << endl;

	// TODO: Now use a Class Point pointer to take the address of B and call display
	SI::Point *D = &B;
	cout << "Point pointer D holding address of LabeledPoint B display :: " << endl;
	D->display();

	/*
	cout << "Printing object A using friend function :: " << endl;
	// friend function does not need the namespace identifier to be called
	fDisplay(A);
	cout << endl;

	// Using an Object of a Friend Class
	cout << "Printing object A using an object of a Friend Class :: " << endl;
	SI::PointFriend pf;
	pf.pfDisplay(A);
	cout << endl;
	*/

	cout << endl << "@@@ Simple Inheritance Example - END" << endl << endl;

	system("pause");
#endif


}
