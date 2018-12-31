#ifndef _COMPLEX_H_
#define _COMPLEX_H_

#include <iostream>
using namespace std;

//this class defines a complex number
class Complex{
	float r;			// real
	float i;			// imaginary
public:
	//constructors	
	Complex ();
	Complex (float real, float imaginary);
	
	//operators for some basic math
	Complex operator + (const Complex& c);
	// TODO :: Implement -, * and / operators
	//		   - :: Given two Complex A(a+bi) and B(c+di) numbers A+B = (a + c)+(b + d)i
	//		   * :: Given two Complex A(a+bi) and B(c+di) numbers A*B = (ac - bd)+(bc + ad)i
	//         / :: Given two Complex A(a+bi) and B(c+di) numbers A/B = ((ac + bd)/(c^2 + d^2))+((bc - ad)/(c^2 + d^2))i
	Complex operator - (const Complex& c);
	Complex operator * (const Complex& c);
	Complex operator / (const Complex& c);

	//  equality operator
	bool operator == (const Complex& c);
	
	//operators for input-output
	friend ostream& operator <<(ostream& os, const Complex& c);
	friend istream& operator >>(istream& os, Complex& c);
};

#endif //_COMPLEX_H_
