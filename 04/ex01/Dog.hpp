#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	private:
		Brain *_Brain;

	public:
		Dog();
		Dog(Dog const & copy);
		virtual ~Dog();

		void makeSound() const;

		Dog & operator=(Dog const & rhs);

		Brain *getBrain() const;
};

# endif
