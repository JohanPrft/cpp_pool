#include "../includes/Ice.hpp"

Ice::Ice() {
 _type = "ice";
}

Ice::Ice(const Ice &src) {
	_type = src._type;
	*this = src;
}

Ice &Ice::operator=(const Ice &cpy) {
	if (this != &cpy)
		_type = cpy._type;
	return (*this);
}

Ice::~Ice() {

}

AMateria* Ice::clone() const{
	AMateria *tmp = new Ice();
	return (tmp);
}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}