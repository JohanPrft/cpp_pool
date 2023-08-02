#ifndef CPP02_POINT_HPP
# define CPP02_POINT_HPP

#include "Fixed.hpp"

class Point {

private:
	const Fixed	x;
	const Fixed	y;

public:
	Point();
	Point(float a, float b);
	Point(const Point &src);
	Point &operator=(const Point &cpy);
	~Point();

	static Fixed CrossProduct (const Point &a, const Point &b, const Point &c);

};


#endif
