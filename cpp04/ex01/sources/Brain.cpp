#include "../includes/Brain.hpp"

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &src) {
	for (int i = 0; i < 100; i++)
		ideas[i] = src.ideas[i];
	*this = src;
}

Brain &Brain::operator=(const Brain &cpy) {
	if (this != &cpy)
		for (int i = 0; i < 100; i++)
			ideas[i] = cpy.ideas[i];
	return (*this);
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}
