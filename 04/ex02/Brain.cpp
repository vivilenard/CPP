#include "Brain.hpp"

Brain::Brain(){ std::cout << "Brain constructor called" << std::endl; }

Brain::Brain(Brain const & copy)
{
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
}

Brain::~Brain(){ std::cout << "Brain deconstructor called" << std::endl; }

Brain & Brain::operator=(Brain const & rhs)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = rhs._ideas[i];
	return (*this);
}