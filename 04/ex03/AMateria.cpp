#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() {}
AMateria::AMateria(std::string const & type): _type(type) {}
AMateria::AMateria(AMateria const & copy): _type(copy._type) {}
AMateria::~AMateria() {}

std::string const & AMateria::getType() const { return (_type); }

AMateria & AMateria::operator=(AMateria const & rhs)
{
	this->_type = rhs._type;
	return (*this);
}

void AMateria::use(ICharacter& target)
{
	if (this->_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl ;
	else if (this->_type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds" << std::endl ;
}