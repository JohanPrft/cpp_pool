#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() {
	_className = "ClapTrap ";
	_name = _className + "Default";
	_hitpoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Robot " << _name << " showed up!" << std::endl;
}

ClapTrap::ClapTrap(std::string name) {
	_className = "ClapTrap ";
	_name = _className + name;
	_hitpoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "Robot " << _name << " showed up!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src) {
	_name = _className + src._name;
	_hitpoints = src._hitpoints;
	_energyPoints = src._energyPoints;
	_attackDamage = src._attackDamage;
	std::cout << "Robot " << _name << " cloned!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &cpy) {
	if (this == &cpy)
		return (*this);
	_name = _className + cpy._name;
	_hitpoints = cpy._hitpoints;
	_energyPoints = cpy._energyPoints;
	_attackDamage = cpy._attackDamage;
	std::cout << "Robot " << _name << " cloned!" << std::endl;
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Robot ClapTrap " << _name << " disappear..." << std::endl;
}

int		ClapTrap::getAttackDamage() const {
	return (_attackDamage);
}

std::string	ClapTrap::getName() const {
	return (_name);
}

void ClapTrap::attack(const std::string& target){
	if (_hitpoints <= 0)
		std::cout << _name << " is broken and can't attack " << target << "!" << std::endl;
	else if (_energyPoints <= 0)
		std::cout << _name << " is out of battery and can't attack " << target << "!" << std::endl;
	else
	{
		std::cout << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	if (_hitpoints <= 0)
		std::cout << _name << " is already severally broken!" << std::endl;
	else if (_hitpoints - amount <= 0)
	{
		_hitpoints -= amount;
		std::cout << _name << " is broken!" << std::endl;
	}
	else
	{
		_hitpoints -= amount;
		std::cout << _name << " takes " << amount << " points of damage!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_hitpoints <= 0)
		std::cout << _name << " is too severally broken and can't be repaired!" << std::endl;
	else if (_energyPoints <= 0)
		std::cout << _name << " is out of battery and can't fixes himself!" << std::endl;
	else if (_hitpoints + amount >= 10)
	{
		std::cout << _name << " starts to reinforce himself!" << std::endl;
		_energyPoints += amount;
		_energyPoints--;
	}
	else
	{
		std::cout << _name << " fixes himself and gained " << amount << " points of health!" << std::endl;
		_energyPoints += amount;
		_energyPoints--;
	}
}
