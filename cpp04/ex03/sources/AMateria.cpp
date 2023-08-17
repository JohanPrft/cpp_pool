#include "../includes/AMateria.hpp"

AMateria::AMateria() {
	_type = "Default";
}

AMateria::AMateria(const AMateria &src) {
	_type = src._type;
}

AMateria &AMateria::operator=(const AMateria &cpy) {
	if (this != &cpy)
		_type = cpy._type;
	return (*this);
}

AMateria::~AMateria() {
}

std::string const & AMateria::getType() const {
	return (_type);
}

void	AMateria::use(ICharacter & target) {
	std::cout << "* unknown materia is used on " << target.getName() << " *" << std::endl;
}