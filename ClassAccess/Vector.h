#include<math.h>

#pragma once
class Vector
{
private:
	float m_x, m_y;
	float m_length;
	inline void updateLength() {
		m_length = sqrt(m_x*m_x + m_y * m_y);
	}
public:
	Vector();
	~Vector();
	void setCoordinates(float x, float y);
	inline float getX() {
		return m_x;
	}
	inline float getY() {
		return m_y;
	}
	inline float length() {
		return m_length;
	}
};

