#ifndef CPP03_DIAMONDTRAP_HPP
# define CPP03_DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap{

private:
	std::string	_name;

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &src);
	DiamondTrap &operator=(const DiamondTrap &cpy);
	~DiamondTrap();

	using ScavTrap::attack;
	void whoAmI();
};


#endif
