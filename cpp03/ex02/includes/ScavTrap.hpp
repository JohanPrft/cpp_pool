#ifndef CPP03_SCAVTRAP_HPP
# define CPP03_SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap{

private:
	std::string	_className;

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap &src);
	ScavTrap &operator=(const ScavTrap &cpy);
	~ScavTrap();

	void	guardGate();
	void	attack(std::string const &target);
};


#endif
