#include "../includes/MutantStack.hpp"

MutantStack::MutantStack() {

}

MutantStack::MutantStack(const MutantStack &src) {
	*this = src;
}

MutantStack &MutantStack::operator=(const MutantStack &cpy) {
	if (this != &cpy) {

	}
	return (*this);
}

MutantStack::~MutantStack() {

}
