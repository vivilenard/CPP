#include "Dog.hpp"

Dog::Dog() : AAnimal()
{
	std::cout << "Dog constructor called" << std::endl;
	_type = "dog";
	_Brain = new Brain();
}

Dog::Dog(Dog const & copy) : AAnimal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = copy._type;
	_Brain = new Brain(*copy._Brain);
}

Dog & Dog::operator=(Dog const & rhs)
{
	this->_type = rhs._type;
	//*this->_Brain = *rhs._Brain;
	delete _Brain;
	_Brain = new Brain(*rhs._Brain);
	return *this;
}

Dog::~Dog() {
	std::cout << "Dog deconstructor called" << std::endl;
	delete _Brain;
}

void Dog::makeSound() const{
	std::cout << "\"WUFF!\"" << std::endl;
}

Brain *Dog::getBrain() const
{
	return (_Brain);
}
