#include "../includes/Dog.hpp"

Dog::Dog() {
	_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &src) {
	_type = src._type;
}

Dog &Dog::operator=(const Dog &cpy) {
	if (this != &cpy)
		_type = cpy._type;
	return (*this);
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Woof" << std::endl;
}
