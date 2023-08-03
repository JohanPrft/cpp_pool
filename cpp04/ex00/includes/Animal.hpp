#ifndef CPP04_ANIMAL_HPP
# define CPP04_ANIMAL_HPP

# include <iostream>

class Animal {

private:

protected:
	std::string	_type;

public:
	Animal();
	Animal(const Animal &src);
	Animal &operator=(const Animal &cpy);
	~Animal();

};


#endif
