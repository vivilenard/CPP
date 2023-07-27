/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:08:14 by vlenard           #+#    #+#             */
/*   Updated: 2023/07/27 12:38:14 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int	main()
{
	try
	{
		Bureaucrat Gustavo("Gustavo", 8);
		PresidentialPardonForm lala("Lala");

		std::cout << std::endl;

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
		Bureaucrat Gustavo ("Gustavo", 2);
		ShrubberyCreationForm Tree ("Tree");

		std::cout << std::endl;

		Tree.beSigned(Gustavo);
		Tree.execute(Gustavo);
	}
	catch (std::exception & e)
	{
		std::cout << std::endl << std::endl;
		std::cerr << RED << e.what() << RESET << '\n';
	}

		try
	{
		Bureaucrat Gustavo ("Gustavo", 2);
		RobotomyRequestForm Robot ("Robot");

		std::cout << std::endl;

		Robot.beSigned(Gustavo);
		Robot.execute(Gustavo);
	}
	catch (std::exception & e)
	{
		std::cout << std::endl << std::endl;
		std::cerr << RED << e.what() << RESET << '\n';
	}
	
	return 0;
}



	
	// try
	// {
	// 	Bureaucrat Gustavo("Gustavo", 8);
	// 	Bureaucrat Maria("Maria", 2);
	// 	PresidentialPardonForm lala("Lala");

	// 	std::cout << std::endl;

	// 	lala.beSigned(Gustavo);
	// 	Maria.executeForm(lala);
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cout << std::endl << std::endl;
	// 	std::cerr << RED << e.what() << RESET << '\n';
	// }