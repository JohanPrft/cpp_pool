#include "../includes/Dog.hpp"

Dog::Dog() : Animal(){
	_type = "Dog";
	_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &src) : Animal(src){
	_brain = new Brain(*src._brain);
	_type = src._type;
}

Dog &Dog::operator=(const Dog &cpy) {
	if (this != &cpy)
	{
		_brain = new Brain(*cpy._brain);
		_type = cpy._type;
	}
	return (*this);
}

Dog::~Dog() {
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "Woof" << std::endl;
}
