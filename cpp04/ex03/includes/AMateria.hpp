#ifndef CPP_POOL_AMATERIA_HPP
# define CPP_POOL_AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class AMateria{

protected:
	std::string	_type;

public:
	AMateria();
	AMateria(const AMateria &src);
	AMateria &operator=(const AMateria &cpy);
	virtual ~AMateria();

	std::string const & getType() const;	//Returns the materia type
	virtual AMateria* clone() const = 0;	//pure virtual
	virtual void use(ICharacter &target);	//virtual
};


#endif
