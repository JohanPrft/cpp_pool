#ifndef CPP_POOL_DOG_HPP
# define CPP_POOL_DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{

private:

public:
	Dog();
	Dog(const Dog &src);
	Dog &operator=(const Dog &cpy);
	~Dog();

	void	makeSound() const;
};


#endif
