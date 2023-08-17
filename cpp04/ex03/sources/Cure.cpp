#include "../includes/Cure.hpp"

Cure::Cure() {
	_type = "cure";
}

Cure::Cure(const Cure &src) {
	_type = src._type;
	*this = src;
}

Cure &Cure::operator=(const Cure &cpy) {
	if (this != &cpy)
		_type = cpy._type;
	return (*this);
}

Cure::~Cure() {

}

AMateria* Cure::clone() const{
	AMateria *tmp = new Cure();
	return (tmp);}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}