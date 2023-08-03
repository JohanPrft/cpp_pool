#ifndef CPP03_FRAGTRAP_HPP
# define CPP03_FRAGTRAP_HPP

# include "../includes/ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

private:
	std::string	_className;

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap &src);
	FragTrap &operator=(const FragTrap &cpy);
	~FragTrap();

	void highFivesGuys(void);
};


#endif
