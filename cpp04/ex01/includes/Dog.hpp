#ifndef CPP_POOL_DOG_HPP
# define CPP_POOL_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{

private:
	Brain*		_brain;

public:
	Dog();
	Dog(const Dog &src);
	Dog &operator=(const Dog &cpy);
	virtual ~Dog();

	void	makeSound() const;
};


#endif
