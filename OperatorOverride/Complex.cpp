#include "Complex.h"

Complex::Complex () {
	// TODO :: Implement
	r = i = 0;
}

Complex::Complex (float real, float imaginary) {
	// TODO :: Implement
	r = real;
	i = imaginary;
}

Complex Complex::operator + (const Complex& c) {
	//		   + :: (real - real, imaginary - imaginary)
	// TODO :: Implement
	return Complex( r + c.r,  i + c.i);
}

Complex Complex::operator - (const Complex& c) {
	return Complex( r - c.r,  i - c.i);
}

Complex Complex::operator * (const Complex& c) {
	return Complex (r*c.r - i*c.i, i*c.r + r*c.i);
}

Complex Complex::operator / (const Complex& c) {
	float newR = (r*c.r + i*c.i) / (c.r*c.r + c.i*c.i);
	float newI = (i*c.r - r*c.i) / (c.r*c.r + c.i*c.i);
	return Complex (newR, newI);
}

bool Complex::operator == (const Complex& c) {
	// TODO :: Implement
	return ( r == c.r ) && ( i == c.i );
}

ostream& operator <<(ostream& os, const Complex& c) {
	// TODO :: Implement
	os << "(" << c.r << " + " << c.i << "i" << ")";
	return os;
}

istream& operator >>(istream& is, Complex& c) {
	// TODO :: Implement
	is >> c.r >> c.i;
	return is;
}
