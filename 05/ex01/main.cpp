/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:08:14 by vlenard           #+#    #+#             */
/*   Updated: 2023/07/25 16:25:51 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int	main()
{
	{
		try
		{
			Bureaucrat Valerie("Valerie", 900);
			Form F1("F1", false, 80, 30);

			std::cout << Valerie << std::endl;
			std::cout << F1 << std::endl;

			Valerie.signForm(F1);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	std::cout << "-------------------------------" << std::endl;
	{
		try
		{
			Bureaucrat Valerie("Valerie", 70);
			Form F1("F1", false, 80, 30);

			std::cout << Valerie << std::endl;
			std::cout << F1 << std::endl;

			F1.beSigned(Valerie);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}