#include "Weapon.hpp"

void Weapon::setType(std::string str)
{
	_type = str;
}

const std::string& Weapon::getType()
{
	std::string const& type = _type;

	return (type);
}

Weapon::Weapon(std::string str)
{
	this->setType(str);
}
