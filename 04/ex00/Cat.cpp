#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(Cat const & copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = copy._type;
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->_type = rhs._type;
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat deconstructor called" << std::endl;
}

void Cat::makeSound() const{
	std::cout << "\"Miauuu!\"" << std::endl;
}
