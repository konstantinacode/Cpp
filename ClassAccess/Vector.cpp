#include "Vector.h"



Vector::Vector()
{
}


Vector::~Vector()
{
}

void Vector::setCoordinates(float x, float y) {
	if (m_x == x && m_y == y) return;
	m_x = x;
	m_y = y;
	updateLength();
}
