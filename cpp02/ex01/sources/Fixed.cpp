#include "../includes/Fixed.hpp"

int Fixed::getRawBits( void ) const{
	return (_value);
}

void Fixed::setRawBits( int const raw ){
	_value = raw;
}


//constructor
Fixed::Fixed() : _value(0) {
}

//constructor
Fixed::Fixed(const int value) : _value(value) {
}

//constructor
Fixed::Fixed(const float value) : _value(value) {
}

//copy constructor
Fixed::Fixed(const Fixed &src) : _value(src._value) {
}

// assignment overload
Fixed &Fixed::operator=(const Fixed &cpy) {
	if (this == &cpy)
		return (*this);
	this->_value = cpy._value;
	return (*this);
}

// destructor
Fixed::~Fixed() {
}
