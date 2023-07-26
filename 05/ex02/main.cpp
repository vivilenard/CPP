/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:08:14 by vlenard           #+#    #+#             */
/*   Updated: 2023/07/26 17:39:55 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		Bureaucrat Gustavo("Gustavo", 8);
		PresidentialPardonForm lala("cheese");

		std::cout << std::endl << std::endl;

		lala.beSigned(Gustavo);
		lala.execute(Gustavo);
	}
	catch(const std::exception& e)
	{
		std::cout << std::endl << std::endl;
		std::cerr << RED << e.what() << RESET << '\n';
	}

	std::cout << "------------------------" << std::endl;
	try
	{
		Bureaucrat Gustavo("Gustavo", 8);
		Bureaucrat Maria("Maria", 2);
		PresidentialPardonForm lala("Cheese");

		std::cout << std::endl << std::endl;

		lala.beSigned(Gustavo);
		Maria.executeForm(lala);
	}
	catch(const std::exception& e)
	{
		std::cout << std::endl << std::endl;
		std::cerr << RED << e.what() << RESET << '\n';
	}

	return 0;
}