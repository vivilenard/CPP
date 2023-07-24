#include "CureMateria.hpp"
#include "ICharacter.hpp"

CureMateria::CureMateria() : AMateria("cure"){}
CureMateria::CureMateria(std::string const & type): AMateria(type){}
CureMateria::CureMateria(CureMateria const & copy): AMateria(copy){}

CureMateria*	CureMateria::clone() const
{
	CureMateria *tmp = new CureMateria();
	return (tmp);
}

void CureMateria::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl ;
}

CureMateria & CureMateria::operator=(CureMateria const & rhs)
{
	this->_type = rhs._type;
	return (*this);
}