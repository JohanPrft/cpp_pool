#include "../includes/Animal.hpp"


Animal::Animal() {

}

Animal::Animal(const Animal &src) {
	*this = src;
}

Animal &Animal::operator=(const Animal &cpy) {

	return (*this);
}

Animal::~Animal() {

}
