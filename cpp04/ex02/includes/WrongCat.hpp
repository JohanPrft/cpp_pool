#ifndef CPP_POOL_WRONGCAT_HPP
# define CPP_POOL_WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{

private:

public:
	WrongCat();
	WrongCat(const WrongCat &src);
	WrongCat &operator=(const WrongCat &cpy);
	~WrongCat();

	void	makeSound() const;
};


#endif
