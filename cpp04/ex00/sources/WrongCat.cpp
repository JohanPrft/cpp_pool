#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() {
	_type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) {
	_type = src._type;
}

WrongCat &WrongCat::operator=(const WrongCat &cpy) {
	if (this != &cpy)
		_type = cpy._type;
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "Meow" << std::endl;
}