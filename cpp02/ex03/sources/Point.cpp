#include "../includes/Point.hpp"

Point::Point() : x(0), y(0){

}

Point::Point(float a, float b) : x(a), y(b){

}

Point::Point(const Point &src) : x(src.x), y(src.y) {
}

Point &Point::operator=(const Point &cpy) {
	// n'a pas de sens
	(void)cpy;
	return (*this);
}

Point::~Point() {

}

Fixed Point::CrossProduct(const Point &a, const Point &b, const Point &c) {
	return (((a.x - c.x) * (b.y - c.y) - (a.y - c.y) * (b.x - c.x)).toFloat());
}
