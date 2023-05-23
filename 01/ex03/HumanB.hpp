#ifndef HUMAN_B

# define HUMAN_B

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon *_weapon;
		std::string _name;

	public:
		void attack ( void );
		void setWeapon( Weapon &weapon );
		//Weapon* getWeapon(){ return _weapon; };
		HumanB(std::string name);
};

# endif