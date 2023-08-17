#ifndef CPP_POOL_CAT_HPP
# define CPP_POOL_CAT_HPP

#include "Animal.hpp"

class Cat : public Animal{

private:
	Brain*		_brain;

public:
	Cat();
	Cat(const Cat &src);
	Cat &operator=(const Cat &cpy);
	virtual ~Cat();

	void	makeSound() const;
};


#endif
