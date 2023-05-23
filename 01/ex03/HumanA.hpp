#ifndef HUMAN_A

# define HUMAN_A

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &_weapon;
		std::string _name;

	public:
		void attack ( void );
		HumanA(std::string name, Weapon &weapon);
};

# endif