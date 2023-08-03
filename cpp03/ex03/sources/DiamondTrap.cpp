#include "../includes/DiamondTrap.hpp"


DiamondTrap::DiamondTrap() : FragTrap(), ScavTrap(){
	_name = "Default";
	ClapTrap::_name = "Default_clap_name";
	_hitpoints = FragTrap::_hitpoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " showed up!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : FragTrap(name), ScavTrap(name) {
	_name = name;
	ClapTrap::_name = name + "_clap_name";
	_hitpoints = FragTrap::_hitpoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap " << _name << " showed up!" << std::endl;

}

DiamondTrap::DiamondTrap(const DiamondTrap &src) : ClapTrap(src), FragTrap(src), ScavTrap(src) {
	_name = src._name;
	ClapTrap::_name = src._name + "_clap_name";
	_hitpoints = src._hitpoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &cpy) {
	if (this == &cpy)
		return (*this);
	_name = cpy._name;
	ClapTrap::_name = cpy._name + "_clap_name";
	_hitpoints = cpy._hitpoints;
	_energyPoints = cpy._energyPoints;
	_attackDamage = cpy._attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap " << _name << " disappear..." << std::endl;
}

void DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name is " << _name << std::endl;
	std::cout << "ClapTrap name is " << ClapTrap::_name << std::endl;
}
