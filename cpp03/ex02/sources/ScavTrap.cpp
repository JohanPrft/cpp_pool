#include "../includes/ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap() {
	_className = "ScavTrap ";
	_name = _className + "Default";
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Robot ScavTrap " << _name << " showed up!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	_className = "ScavTrap ";
	_name = _className + name;
	_hitpoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "Robot " << _name << " showed up!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {
	std::cout << "Robot " << _name << " cloned!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &cpy) {
	if (this == &cpy)
		return (*this);
	_name = _className + cpy._name;
	_hitpoints = cpy._hitpoints;
	_energyPoints = cpy._energyPoints;
	_attackDamage = cpy._attackDamage;
	std::cout << "Robot " << _name << " cloned!" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "Robot ScavTrap " << _name << " disappear..." << std::endl;
}

void ScavTrap::attack(const std::string& target){
	if (_hitpoints <= 0)
		std::cout << _name << " is broken and can't attack " << target << "!" << std::endl;
	else if (_energyPoints <= 0)
		std::cout << _name << " is out of battery and can't attack " << target << "!" << std::endl;
	else
	{
		std::cout << _name << " attacks violently " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
}

void ScavTrap::guardGate() {
	std::cout << "Robot " << _name << " is now in Gate keeper mode." << std::endl;
}
