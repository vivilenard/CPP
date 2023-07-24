#include "Cat.hpp"

Cat::Cat() : AAnimal()
{
	std::cout << "Cat constructor called" << std::endl;
	_type = "cat";
	_Brain = new Brain();
}

Cat::Cat(Cat const & copy) : AAnimal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = copy._type;
	_Brain = new Brain(*copy._Brain);
}

Cat & Cat::operator=(Cat const & rhs)
{
	this->_type = rhs._type;
	delete _Brain;
	_Brain = new Brain(*rhs._Brain);
	return *this;
}

Cat::~Cat() {
	std::cout << "Cat deconstructor called" << std::endl;
	delete _Brain;
}

void Cat::makeSound() const{
	std::cout << "\"Miauuu!\"" << std::endl;
}

Brain *Cat::getBrain() const
{
	return (_Brain);
}