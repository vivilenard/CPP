#include "IceMateria.hpp"
#include "ICharacter.hpp"

IceMateria::IceMateria() : AMateria("ice"){}
IceMateria::IceMateria(std::string const & type) : AMateria(type){}
IceMateria::IceMateria(IceMateria const & copy) : AMateria(copy){}

IceMateria*	IceMateria::clone() const
{
	IceMateria *tmp = new IceMateria();
	return (tmp);
}

void IceMateria::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl ;
}

IceMateria & IceMateria::operator=(IceMateria const & rhs)
{
	this->_type = rhs._type;
	return (*this);
}