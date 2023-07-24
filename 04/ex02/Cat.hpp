#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
	private:
		Brain *_Brain;
	public:
		Cat();
		Cat(Cat const & copy);
		virtual ~Cat();

		void makeSound() const;

		Cat & operator=(Cat const & rhs);

		Brain *getBrain() const;
};

# endif
