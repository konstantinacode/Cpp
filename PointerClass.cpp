#include<iostream>
using namespace std;

class Point {
	float x, y;
public:
	Point(float xx = 0, float yy = 0) {
		x = xx;
		y = yy;
	}
	void print() const {
		cout << x << "," << y << endl;
	}
	void add(const Point& p) {
		x += p.x;
		y += p.y;
	}
};

int main() {
	Point p1(1, 2), p2(3, 4);
	p1.add(p2);
	p1.print(); //prints 4,6
	p2.print(); //prints 3,4

	system("PAUSE");
	return 0;
}