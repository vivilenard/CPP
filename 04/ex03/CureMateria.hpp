#ifndef CUREMATERIA_HPP

# define CUREMATERIA_HPP

#include <iostream>
//#include "Character.hpp"
#include "AMateria.hpp"

class CureMateria: public AMateria
{
	public:
		CureMateria();
		CureMateria(std::string const & type);
		CureMateria(CureMateria const & copy);
		~CureMateria(){}

		std::string const & getType() const;
		//void	setType(std::string type) const;

		CureMateria* clone() const;
		void use(ICharacter& target);

		CureMateria & operator=(CureMateria const & rhs);
};

# endif