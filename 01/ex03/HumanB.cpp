#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	_weapon = NULL;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack ( void )
{
	std::string WeaponType;

	if (!_weapon)
		WeaponType = "bare hands";
	else
		WeaponType = _weapon->getType();
	std::cout << _name << " attacks with their " << WeaponType << std::endl;
}