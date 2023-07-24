#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(Dog const & copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = copy._type;
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->_type = rhs._type;
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog deconstructor called" << std::endl;
}

void Dog::makeSound() const{
	std::cout << "\"WUFF!\"" << std::endl;
}
