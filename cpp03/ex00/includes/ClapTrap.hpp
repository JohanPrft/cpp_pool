#ifndef CPP03_CLAPTRAP_HPP
# define CPP03_CLAPTRAP_HPP

# include <iostream>

class ClapTrap {

private:
	std::string	_name;
	int			_hitpoints;
	int			_energyPoints;
	int			_attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap &src);
	ClapTrap &operator=(const ClapTrap &cpy);
	~ClapTrap();

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif
