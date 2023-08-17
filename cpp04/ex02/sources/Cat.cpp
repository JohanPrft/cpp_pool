#include "../includes/Cat.hpp"

Cat::Cat() : Animal(){
	_type = "Cat";
	_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &src) : Animal(src){
	_brain = new Brain(*src._brain);
	_type = src._type;
}

Cat &Cat::operator=(const Cat &cpy) {
	if (this != &cpy)
	{
		_brain = new Brain(*cpy._brain);
		_type = cpy._type;
	}
	return (*this);
}

Cat::~Cat() {
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "Meow" << std::endl;
}