#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Animal constructor called" << std::endl; }

Animal::Animal(Animal const & copy){
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}
Animal::~Animal(){ std::cout << "Animal deconstructor called" << std::endl; }

void	Animal::makeSound() const {
	std::cout << "\"Hmmm... I am an animal\"" << std::endl;
}

std::string Animal::getType() const { return _type; }

Animal & Animal::operator=(Animal const & rhs)
{
	this->_type = rhs._type;
	return *this;
}
