#ifndef CPP_POOL_CHARACTER_HPP
# define CPP_POOL_CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{

private:
	static int const	_inventorySize = 4;
	std::string			_name;
	AMateria			*_inventory[_inventorySize];
	AMateria			*_groundInventory[_inventorySize];
	void				_deleteInventory(void);
	void				_deleteGroundInventory(void);

public:
	Character();
	Character(const std::string& name);
	Character(const Character &src);
	Character &operator=(const Character &cpy);
	~Character();



			std::string const	&getName() const;
			void				equip(AMateria *m);
			void				unequip(int idx);
			void				use(int idx, ICharacter &target);

};


#endif
