#include "../includes/Point.hpp"

Point::Point() : x(0), y(0){

}

Point::Point(float a, float b) : x(a), y(b){

}

Point::Point(const Point &src) : x(src.x), y(src.y) {
}

Point &Point::operator=(const Point &cpy) {
	// ne fait pas sens
	return (*this);
}

Point::~Point() {

}
