#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal
{
	protected:
		std::string	_type;
	
	public:
		AAnimal();
		AAnimal(AAnimal const & copy);
		virtual ~AAnimal();

		virtual void makeSound() const = 0;

		AAnimal & operator=(AAnimal const & rhs);

		std::string getType() const;
};

# endif
