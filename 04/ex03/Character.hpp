#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"


class Character: public ICharacter
{
	private:
		std::string _name;
		AMateria *_inventory[4];
		void	init_inventory();

	public:
		Character();
		Character(std::string const & name);
		Character(Character const & copy);
		~Character();

		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
		void info();

		Character & operator=(const Character & rhs);
};

# endif