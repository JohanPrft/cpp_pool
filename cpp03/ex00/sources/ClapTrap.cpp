#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Robot ClapTrap " << _name << " showed up!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Robot ClapTrap " << _name << " showed up!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	std::cout << "Robot ClapTrap " << _name << " cloned!" << std::endl;
	_name = src._name;
	_hitpoints = src._hitpoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cpy) {
	if (this == &cpy)
		return (*this);
	std::cout << "Robot ClapTrap " << _name << " cloned!" << std::endl;
	_name = cpy._name;
	_hitpoints = cpy._hitpoints;
	_energyPoints = cpy._energyPoints;
	_attackDamage = cpy._attackDamage;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Robot ClapTrap " << _name << " disappear..." << std::endl;
}

void ClapTrap::attack(const std::string& target){
	if (_hitpoints <= 0)
		std::cout << "ClapTrap " << _name << " is broken and can't attack " << target << "!" << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "ClapTrap " << _name << " is out of battery and can't attack " << target << "!" << std::endl;
	else
	{
		std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (_hitpoints <= 0)
		std::cout << "ClapTrap " << _name << " is already severally broken!" << std::endl;
	else if (_hitpoints - amount <= 0)
		std::cout << "ClapTrap " << _name << " is broken!" << std::endl;
	else
		std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_hitpoints <= 0)
		std::cout << "ClapTrap " << _name << " is too severally broken and can't be repaired!" << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "ClapTrap " << _name << " is out of battery and can't fixes himself!" << std::endl;
	else if (_hitpoints + amount >= 10)
	{
		std::cout << "ClapTrap " << _name << " starts to reinforce himself!" << std::endl;
		_energyPoints--;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " fixes himself and gained " << amount << " points of health!" << std::endl;
		_energyPoints--;
	}
}