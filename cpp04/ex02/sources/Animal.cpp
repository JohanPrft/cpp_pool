#include "../includes/Animal.hpp"
#include "../includes/Brain.hpp"

Animal::Animal(){
	_brain = new Brain();
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &src) {
	_brain = new Brain(*src._brain);
	_type = src._type;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &cpy) {
	if (this != &cpy)
	{
		_brain = new Brain(*cpy._brain);
		_type = cpy._type;
	}
	return (*this);
}

Animal::~Animal() {
	delete _brain;
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const {
	return (_type);
}

void Animal::makeSound() const {
	std::cout << "* Weird sounds *" << std::endl;
}