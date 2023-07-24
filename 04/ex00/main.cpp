/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 12:54:17 by vlenard           #+#    #+#             */
/*   Updated: 2023/06/19 13:42:53 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

void	test()
{
	const Animal* meta = new Animal();
	const Animal* j= new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	//wrong

	const WrongAnimal* h = new WrongCat();
	h->makeSound();

	WrongCat Katze;
	Katze.makeSound();
	
	std::cout << std::endl;
	delete meta;
	delete j;
	delete i;
	delete h;
}

int main()
{
	test();
	//system("leaks Animals");
	return 0;
}