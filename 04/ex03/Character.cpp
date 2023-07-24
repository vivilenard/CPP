#include "Character.hpp"
#include "IceMateria.hpp"

Character::Character():_name("X"){ init_inventory(); }
Character::Character(std::string const & name): _name(name) { init_inventory(); }
Character::Character(Character const & copy) { *this = copy; }
Character::~Character()
{ 
	for (int i = 0; i < 4; i++)
		delete _inventory[i];
}

std::string const & Character::getName() const { return _name; }

Character & Character::operator=(Character const & rhs)
{
	this->_name = rhs._name;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
		{
			delete _inventory[i];
			_inventory[i] = rhs._inventory[i]->clone();
		}
		else
			_inventory[i] = NULL;
	}
	return (*this);
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == m)
		{
			std::cout << "Error: Cannot own the same materia twice" << std::endl;
			return ;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i] == NULL)
		{
			_inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && _inventory[idx])
		_inventory[idx]->use(target);
}

void Character::info()
{
	std::cout << _name << ": " << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (_inventory[i])
			std::cout << "inventory " << i << ": " << _inventory[i]->getType() << std::endl;
		else
			std::cout << "inventory " << i << ": unequipped" << std::endl; 
	}
}

void Character::init_inventory(){ for (int i = 0; i < 4; i++) _inventory[i] = NULL; }