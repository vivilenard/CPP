#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const & copy) : WrongAnimal(copy)
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	this->_type = copy._type;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
	this->_type = rhs._type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat deconstructor called" << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << "\"Miauuu!\"" << std::endl;
}
