/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:08:14 by vlenard           #+#    #+#             */
/*   Updated: 2023/07/27 15:19:21 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int	main()
{
	try
	{
		Bureaucrat	Maria("Maria", 6);
		Intern		Kevin;
		AForm		*form;

		form = Kevin.makeForm("presidential pardons", "jooo");
	}
	catch (std::exception & e)
	{
		std::cout << std::endl << std::endl;
		std::cerr << RED << e.what() << RESET << '\n';
	}
}