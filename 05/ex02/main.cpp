/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:08:14 by vlenard           #+#    #+#             */
/*   Updated: 2023/07/26 17:14:37 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	try
	{
		Bureaucrat Gustavo("Gustavo", 8);
		PresidentialPardonForm hi("hi");
		PresidentialPardonForm lala("cheese");

		std::cout << std::endl << std::endl;

		lala = hi;
		Gustavo.signAForm(lala);
		lala.execute(Gustavo);

	}
	catch(const std::exception& e)
	{
		std::cout << std::endl << std::endl;
		std::cerr << RED << e.what() << RESET << '\n';
	}
	

	return 0;
}