#include <iostream>

#include "simpleInheritance.h"

using namespace std;
using namespace SI;

// --------------------------------------------------------- //
// Point Constructor-Destructor & Member Function Definition //
// --------------------------------------------------------- //

// Constructor
Point::Point ( int newX, int newY ) 
	:x(newX), y(newY) {
	cout << "\t- Point Constructor" << endl; 
}

// Copy-Constructor
Point::Point (const Point& original)
	:x(original.x), y(original.y) {
		cout << "\t- Point Copy-Constructor" << endl; 
}

// Destructor
Point::~Point () { 
	cout << "\t- Point Destructor" << endl; 
}

void
Point::display () const {
	cout << "x: " << x << ", y: " << y << endl;
}

// ---------------------------------------------------------------------------------- //
// LabeledPoint Constructor-Destructor, Copy-Constructor & Member Function Definition //
// ---------------------------------------------------------------------------------- //

// Constructor
LabeledPoint::LabeledPoint (int newX, int newY, const string& newLabel)
	:Point(newX,newY), label(newLabel) {
	cout << "\t- LabeledPoint Constructor" << endl;
	// x = newX; // THIS CANNOT BE DONE - x is private in the BASE CLASS
}

// Copy-Constructor
LabeledPoint::LabeledPoint (const LabeledPoint& original)
	:Point(original), label(original.label) {
	cout << "\t- LabeledPoint Copy-Constructor" << endl;
}

// Destructor
LabeledPoint::~LabeledPoint () { 
	cout << "\t- LabeledPoint Destructor" << endl; 
}

void
LabeledPoint::display () const {
	cout << "Label: " << label.c_str() << " ";
	// Call Base Class display function to type Base values
	Point::display();
}

// -------------------------------------- //
// PointFriend Member Function Definition //
// -------------------------------------- //

void
PointFriend::pfDisplay (const Point &point ) const {
	cout << "x: " << point.x << ", y: " << point.y << endl;
}

// ------------------------------------------------------------ //
// Friend function needs to be declared inside the SI namespace //
// ------------------------------------------------------------ //
namespace SI {
	void fDisplay(const Point &point) {
		cout << "x: " << point.x << ", y: " << point.y << endl;
	}
}
