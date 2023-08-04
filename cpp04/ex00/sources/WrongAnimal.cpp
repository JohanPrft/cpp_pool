#include "../includes/WrongAnimal.hpp"


WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src) {
	_type = src._type;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &cpy) {
	if (this != &cpy)
		_type = cpy._type;
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

std::string WrongAnimal::getType() const {
	return (_type);
}

void WrongAnimal::makeSound() const {
	std::cout << "* Weird and wrong sounds *" << std::endl;
}