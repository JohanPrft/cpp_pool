#ifndef CPP_POOL_ICE_HPP
# define CPP_POOL_ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria{

private:

public:
	Ice();
	Ice(const Ice &src);
	Ice &operator=(const Ice &cpy);
	~Ice();

	AMateria*	clone() const;
	void		use(ICharacter &target);
};


#endif
