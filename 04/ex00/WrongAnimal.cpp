#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "WrongAnimal constructor called" << std::endl; }

WrongAnimal::WrongAnimal(WrongAnimal const & copy){
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = copy;
}
WrongAnimal::~WrongAnimal(){ std::cout << "WrongAnimal deconstructor called" << std::endl; }

void	WrongAnimal::makeSound() const {
	std::cout << "\"Hmmm...I am an animal\"" << std::endl;
}

std::string WrongAnimal::getType() const { return _type; }

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
	this->_type = rhs._type;
	return *this;
}
