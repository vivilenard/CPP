#include <iostream>

#include "Cat.hpp"
#include "Dog.hpp"

void tests()
{
	Animal *j = new Cat();
	j->makeSound();

	Animal *copycat = j;
	copycat->makeSound();

	Dog *doggi = new Dog();
	std::cout << "original Brain: " << doggi->getBrain() << std::endl;

	Dog doggicpy = *doggi;
	std::cout << "clone Brain: " << doggicpy.getBrain() << std::endl;

	// Animal *a[10];
	// for (int n = 0; n < 5; n++)
	// 	a[n] = new Cat();
	// for (int n = 5; n < 10; n++)
	// 	a[n] = new Dog();
	// for (int i = 0; i < 10; i++)
	// 	delete a[i];

	delete doggi;
	delete j;
}

int	main()
{
	tests();
	//system ("leaks Animal");
	return 0;
}