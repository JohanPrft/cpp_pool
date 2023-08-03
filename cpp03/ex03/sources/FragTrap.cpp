#include "../includes/FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
	_className = "FragTrap ";
	_name = _className + "Default";
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Robot FragTrap " << _name << " showed up!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	_className = "FragTrap ";
	_name = _className + name;
	_hitpoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "Robot " << _name << " showed up!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src) {
	std::cout << "Robot " << _name << " cloned!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &cpy) {
	if (this == &cpy)
		return (*this);
	_name = _className + cpy._name;
	_hitpoints = cpy._hitpoints;
	_energyPoints = cpy._energyPoints;
	_attackDamage = cpy._attackDamage;
	std::cout << "Robot " << _name << " cloned!" << std::endl;
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "Robot FragTrap " << _name << " disappear..." << std::endl;
}

void FragTrap::highFivesGuys() {
	if (_hitpoints <= 0)
		std::cout << "Robot " << _name << " is out, he can't ask for high fives!" << std::endl;
	else
		std::cout << "Robot " << _name << " is asking for high fives!" << std::endl;
}
