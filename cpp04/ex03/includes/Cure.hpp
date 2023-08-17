#ifndef CPP_POOL_CURE_HPP
# define CPP_POOL_CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria{

private:

public:
	Cure();
	Cure(const Cure &src);
	Cure &operator=(const Cure &cpy);
	~Cure();

	AMateria* clone() const;
	virtual void use(ICharacter& target);
};


#endif
