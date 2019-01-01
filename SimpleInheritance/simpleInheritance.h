#ifndef SIMPLE_INHERITANCE_
#define SIMPLE_INHERITANCE_

#include <string>

namespace SI {
	// Base Class
	class Point {
		// Private variable
		int x, y;

	public:
		// Constructor
		Point(int newX = 0, int newY = 0);
		
		// Copy-Constructor
		Point(const Point& original);
		
		// Destructor
		~Point ();

		// Set functions
		void setX(int newX) { x = newX; }
		void setY(int newY) { y = newY; }
		// Get functions
		int getX() const { return x; }
		int getY() const { return y; }

		void display() const;

		// A friend function
		friend void fDisplay(const Point &point);

		// By declaring PointFriend class as friend of ours, we give PointFriend access even to our private members
		friend class PointFriend;
	};

	// Derived Class
	class LabeledPoint : public Point
	{
		// New custom variable
		std::string label;
	public:
		// Constructor Declaration
		LabeledPoint(int newX = 0, int newY = 0, const std::string& newLabel = "label");
		LabeledPoint(const LabeledPoint& original);
		// Destructor
		~LabeledPoint ();

		// New functions
		void setLabel(const std::string& newLabel) { label = newLabel; }
		std::string getLabel() const { return label; }

		// Overriding Base Class Function
		void display() const;
	};

	// A Class that is Friend of Point class
	class PointFriend {
	public:
		void pfDisplay (const Point &point) const;
	};
}

#endif // SIMPLE_INHERITANCE_