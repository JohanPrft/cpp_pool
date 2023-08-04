#include "../includes/Cat.hpp"

Cat::Cat() {
	_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &src) {
	_type = src._type;
}

Cat &Cat::operator=(const Cat &cpy) {
	if (this != &cpy)
		_type = cpy._type;
	return (*this);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}