#ifndef WEAPON_HPP

# define WEAPON_HPP

#include <iostream>
//#include "HumanA.hpp"
//#include "HumanB.hpp"

class Weapon
{
	private:
		std::string _type;
	public:
		const std::string& getType();
		void setType(std::string name);
		Weapon(std::string str);
};

# endif