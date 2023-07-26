#include "../includes/Fixed.hpp"

int Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (_value);
}

void Fixed::setRawBits( int const raw ){
	std::cout << "setRawBits member function called" << std::endl;
	_value = raw;
}


//constructor
Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

//copy constructor
Fixed::Fixed(const Fixed &src) : _value(src._value) {
	std::cout << "Copy constructor called" << std::endl;
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
	std::cout << "Destructor called" << std::endl;
}
