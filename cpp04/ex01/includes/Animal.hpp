#ifndef CPP04_ANIMAL_HPP
# define CPP04_ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal {

private:

protected:
	std::string	_type;

public:
	Animal();
	Animal(const Animal &src);
	Animal &operator=(const Animal &cpy);
	virtual ~Animal();

	std::string		getType() const;
	virtual void	makeSound() const;
};


#endif
