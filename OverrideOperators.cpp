#include<iostream>
using namespace std;

class vec2 {
	float x, y;
public:
	vec2(float xx = 0, float yy = 0) {
		x = xx;
		y = yy;
	}
	void print() const {
		cout << x << ", " << y << endl;
	}
	vec2 operator+(const vec2& p) const;
	vec2& operator++();
	const vec2 operator++(int);
};

vec2 vec2::operator+(const vec2& p) const {
	vec2 temp(x + p.x, y + p.y);
	return temp;
}//or return vec2(x + p.x, y + p.y);

vec2& vec2::operator++() {
	++x;
	++y;
	return *this;
}

const vec2 vec2::operator++(int) {
	vec2 temp(x, y);
	x++;
	y++;
	return temp;
}

int main() {
	vec2 p1(1, 2), p2(3, 4);
	vec2 p3 = p1 + p2; //use of the override operator +
	vec2 p4 = p1.operator+(p2); //same as before. not used
	p1.print(); //prints 1,2
	p2.print(); //prints 3,4
	p3.print(); //prints 4,6
	p4.print(); //prints 4,6

	cout << endl;

	p2 = ++p1;
	p1.print(); //prints 2,3
	p2.print(); //prints 2,3
	p3 = ++(++p1); //++p1 is a reference to p1
	p1.print(); //prints 4,5
	p3.print(); //prints 4,5

	cout << endl;

	/*p2 = (p1++)++; 
	now with the const vec2 vec2::operator++(int) 
	is not allowed because vec2(copy) that the call p1++ returns
	is a const */
	p2 = p1++;
	p1.print(); //prints 5,6
	p2.print(); //prints 4,5

	system("Pause");
	return 0;
}
