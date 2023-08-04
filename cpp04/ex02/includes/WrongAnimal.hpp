#ifndef CPP04_WRONGANIMAL_HPP
# define CPP04_WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal {

private:

protected:
	std::string	_type;

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &src);
	WrongAnimal &operator=(const WrongAnimal &cpy);
	virtual ~WrongAnimal();

	std::string		getType() const;
	void	makeSound() const;
};


#endif
