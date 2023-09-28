/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:53:05 by vlenard           #+#    #+#             */
/*   Updated: 2023/09/28 14:53:06 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Identify.hpp"

int main()
{
	Base *rand_class;

	rand_class = generate();
	identify(*rand_class);
	identify(rand_class);
	delete rand_class;
	return 0;
}

Base *generate(void)
{
	std::srand(time(0));
	int random = std::rand() % 3;
	switch (random)
	{
		case 0:
			std::cout << "generate A" << std::endl; return new A;
		case 1:
			std::cout << "generate B" << std::endl; return new B;
		case 2:
			std::cout << "generate C" << std::endl; return new C;
		default:
			std::cout << "generate A" << std::endl; return new A;
	}
	return NULL;
}

void identify (Base &ptr)
{
	std::cout << "Taking reference\n";
	try
	{
		A downcast = dynamic_cast<A&>(ptr);
		std::cout << "identified as A class" << std::endl;
	}
	catch (std::exception &e){}
	try
	{
		B downcast = dynamic_cast<B&>(ptr);
		std::cout << "identified as B class" << std::endl;
	}
	catch (std::exception &e){}
	try
	{
		C downcast = dynamic_cast<C&>(ptr);
		std::cout << "identified as C class" << std::endl;
	}
	catch (std::exception &e){}
}

void identify (Base *ptr)
{
	std::cout << "Taking pointer\n";
	if (!ptr)
	{
		std::cout << "There is nothing to be identified" << std::endl;
		return ;
	}
	A *downcast_a = dynamic_cast<A*>(ptr);
	if (downcast_a)
		std::cout << "identified as A class" << std::endl;
	
	B *downcast_b = dynamic_cast<B*>(ptr);
	if (downcast_b)
		std::cout << "identified as B class" << std::endl;

	C *downcast_c = dynamic_cast<C*>(ptr);
	if (downcast_c)
		std::cout << "identified as C class" << std::endl;
}