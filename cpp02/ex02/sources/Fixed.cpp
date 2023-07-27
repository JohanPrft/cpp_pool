/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jprofit <jprofit@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 10:14:07 by jprofit           #+#    #+#             */
/*   Updated: 2023/07/27 10:14:07 by jprofit          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Fixed.hpp"

//constructor
Fixed::Fixed() : _value(0) {
}

//constructor
Fixed::Fixed(const int value) : _value(value << _binaryPointPos) {
}

//constructor
Fixed::Fixed(const float value) : _value(roundf(value * (1 << _binaryPointPos))) {
}

//copy constructor
Fixed::Fixed(const Fixed &src) : _value(src._value) {
}

// destructor
Fixed::~Fixed() {
}

// assignment overload
Fixed &Fixed::operator=(const Fixed &cpy) {
	if (this != &cpy)
		this->_value = cpy._value;
	return (*this);
}

int Fixed::getRawBits( void ) const{
	return (_value);
}

void Fixed::setRawBits( int const raw ){
	_value = raw;
}

int Fixed::toInt( void ) const{
	return (_value >> _binaryPointPos);
}

float Fixed::toFloat( void ) const{
	return ((float)(_value) / (1 << _binaryPointPos));
}

std::ostream& operator<<( std::ostream& os, const Fixed& number ){
	os << number.toFloat();
	return (os);
}

bool	Fixed::operator<(const Fixed& other) const{
	if (this->toFloat() < other.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator>(const Fixed& other) const{
	if (this->toFloat() > other.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed& other) const{
	if (this->toFloat() <= other.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed& other) const{
	if (this->toFloat() >= other.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed& other) const{
	if (this->toFloat() == other.toFloat())
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed& other) const{
	if (this->toFloat() != other.toFloat())
		return (true);
	return (false);
}

Fixed Fixed::operator+(const Fixed& other) const{
	return (this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const{
	return (this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const{
	return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const{
	return (this->toFloat() / other.toFloat());
}

void	Fixed::operator++() {
	_value++;
}

void	Fixed::operator++(int) {
	++_value;
}









