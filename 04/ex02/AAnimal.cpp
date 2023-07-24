#include "AAnimal.hpp"

AAnimal::AAnimal(){
	std::cout << "AAnimal constructor called" << std::endl; }

AAnimal::AAnimal(AAnimal const & copy){
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = copy;
}
AAnimal::~AAnimal(){ std::cout << "AAnimal deconstructor called" << std::endl; }

void	AAnimal::makeSound() const {
	std::cout << "\"Hmmm... I am an AAnimal\"" << std::endl;
}

std::string AAnimal::getType() const { return _type; }

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
	this->_type = rhs._type;
	return *this;
}
