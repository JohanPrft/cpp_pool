#include "../includes/Animal.hpp"


Animal::Animal(){
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &src) {
	_type = src._type;
}

Animal &Animal::operator=(const Animal &cpy) {
	if (this != &cpy)
		_type = cpy._type;
	return (*this);
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
	return (_type);
}

void Animal::makeSound() const {
	std::cout << "* Weird sounds *" << std::endl;
}