#ifndef ICEMATERIA_HPP

# define ICEMATERIA_HPP

#include <iostream>
//#include "Character.hpp"
#include "AMateria.hpp"

class IceMateria: public AMateria
{
	public:
		IceMateria();
		IceMateria(std::string const & type);
		IceMateria(IceMateria const & copy);
		~IceMateria(){}

		std::string const & getType() const;
		//void	setType(std::string type) const;

		IceMateria* clone() const;
		void use(ICharacter& target);

		IceMateria & operator=(IceMateria const & rhs);
};

# endif