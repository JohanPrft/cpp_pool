#include "../includes/Character.hpp"

Character::Character() {
	_name = "Default";
	for (int i = 0; i < _inventorySize; ++i)
	{
		_inventory[i] = NULL;
		_groundInventory[i] = NULL;
	}
}

Character::Character(const std::string& name) {
	_name = name;
	for (int i = 0; i < _inventorySize; ++i)
	{
		_inventory[i] = NULL;
		_groundInventory[i] = NULL;
	}
}

Character::Character(const Character &src) {
	_name = src._name;
	for (int i = 0; i < _inventorySize; ++i)
	{
		_inventory[i] = NULL;
		_groundInventory[i] = NULL;
	}
}

Character &Character::operator=(const Character &cpy) {
	if (this != &cpy)
	{
		_name = cpy._name;
		_deleteInventory();
		_deleteGroundInventory();
		for (int i = 0; i < _inventorySize; ++i)
		{
			_inventory[i] = cpy._inventory[i]->clone();		//clone to deep copy
			_groundInventory[i] = cpy._groundInventory[i]->clone();
		}
	}
	return (*this);
}

Character::~Character() {
	_deleteInventory();
	_deleteGroundInventory();
}

std::string const &Character::getName() const {
	return (_name);
}

void	Character::equip(AMateria *m){
	if (!m)
	{
		std::cout << "Can't equip something that doesn't exist!" << std::endl;
		return ;
	}
	for (int i = 0; i < _inventorySize; i++)
	{
		if (_inventory[i] == NULL) {
			_inventory[i] = m;
			std::cout << m->getType() << " equiped at place " << i << std::endl;
			return;
		}
	}
	std::cout << "Inventory full!" << std::endl;
}

void	Character::unequip(int idx) {
	if (_inventory[idx] == NULL)
		std::cout << "Nothing is here..." << std::endl;
	else {
		for (int i = 0; i < _inventorySize; i++){
			if (_groundInventory[i] == NULL) {
				_groundInventory[i] = _inventory[idx];
				std::cout << _inventory[idx]->getType() << "dropped" << std::endl;
				return;
			}
		}
		std::cout << "Can't drop anymore" << std::endl;
	}
}

void	Character::use(int idx, ICharacter &target){
	std::cout << "Using " << _inventory[idx]->getType() << " on " << target.getName() << std::endl;
	_inventory[idx]->use(target);
}

void	Character::_deleteInventory() {
	for (int i = 0; i < _inventorySize; ++i)
	{
		if(_inventory[i] != NULL)
			delete _inventory[i];
	}
}

void Character::_deleteGroundInventory() {
	for (int i = 0; i < _inventorySize; ++i)
	{
		if(_groundInventory[i] != NULL)
			delete _groundInventory[i];
	}
}
