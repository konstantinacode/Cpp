#include <iostream>
#include <iomanip>

#include "virtualFunctions.h"
#include "pureVirtualFunctions.h"

using namespace std;

#define VIRTUAL_FUNCTIONS
//#define PURE_VIRTUAL_FUNCTIONS

int main ( int argc, char *argv[] ) {
#ifdef VIRTUAL_FUNCTIONS
	VF::Point A(5,10,"A");
	VF::LabeledPoint B(0,6,"B","Derived Point");
	B.insertLabel("Second Label");
	B.insertLabel("Third Label");

	cout << endl << "@@@ Virtual Functions Example - START" << endl << endl;
	cout << "Point A display :: " << endl;
	A.display();
	cout << endl;
	cout << "LabeledPoint B display :: " << endl;
	B.display();
	cout << endl;

	// TODO: write some code to invoke the Copy-Constructor of Class LabeledPoint
	//		 then use modifyLable function to change the third label to "C Label"
	VF::LabeledPoint C(B);
	C.modifyLabel(2, "C Label");

	// TODO: Now use a Class Point pointer to take the address of B and call display
	VF::Point * pointer = &B;
	pointer->display();

	// TODO: Is there a problem in the following code ????(see console output). If how would we fix it???
	VF::Point *E = new VF::LabeledPoint(1,1,"E","Dynamically Allocated Derived Point");
	((VF::LabeledPoint *)E)->insertLabel("!!!!!!");
	((VF::LabeledPoint *)E)->insertLabel("------");
	((VF::LabeledPoint *)E)->insertLabel("@@@@@@");
	cout << "Point pointer E display :: " << endl;
	E->display();
	// Dynamically allocated data should be deleted
	delete E;
	

	cout << endl << "@@@ Virtual Functions Example - END" << endl << endl;

#elif defined PURE_VIRTUAL_FUNCTIONS
	cout << endl << "@@@ Pure Virtual Functions Example - START" << endl << endl;

	// !!! You cannot create an Object of an Abstract Class
	//PVF::Shape shape("Abstract Shape");	// - COMPILE ERROR :: cannot instantiate abstract class

	// But you can have Abstract Class Array that contains Derived Classes
	std::vector<PVF::Shape *> shapeList;

	shapeList.push_back(new PVF::Circle("Circle 1", 2.0));
	shapeList.push_back(new PVF::Rectangle("Rectangle 1", 3.0, 4.0));
	shapeList.push_back(new PVF::Circle("Circle 2", 4.0));
	shapeList.push_back(new PVF::Rectangle("Rectangle 2", 1.0, 1.0));
	shapeList.push_back(new PVF::Circle("Circle 3", 6.0));
	shapeList.push_back(new PVF::Rectangle("Rectangle 3", 2.0, 5.0));

	cout << "shapeList contains the following Shapes" << endl;
	std::vector<PVF::Shape *>::const_iterator cit;
	for ( cit = shapeList.begin(); cit != shapeList.end(); ++cit ) {
		PVF::Shape *shape = (*cit);
		cout << fixed << setprecision(3) << shape->getName() << "\t with area: " << shape->area() << "\t and perimeter: " << shape->perimeter() << endl;
	}

	cout << endl << "@@@ Pure Virtual Functions Example - END" << endl << endl;
	
	// Did we forget something?????
	for (cit = shapeList.begin(); cit != shapeList.end(); ++cit) {
		delete *cit;
	}
#endif

	system("pause");
}
