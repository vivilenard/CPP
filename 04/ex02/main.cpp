#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"

void tests()
{
	AAnimal *i = new Cat();
	i->makeSound();

	AAnimal *j = new Dog();
	j->makeSound();

	//wrong
	AAnimal *l = new AAnimal();
	l->makeSound();

	std::cout << std::endl;
	delete j;
	delete i;
}

int	main()
{
	tests();
	//system ("leaks AAnimal");
	return 0;
}