/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:08:14 by vlenard           #+#    #+#             */
/*   Updated: 2023/07/26 12:20:04 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	{
		Bureaucrat	Tim("Tim", 150);
		Bureaucrat	Helge(Tim);

		try{
			Helge.incrementGrade();
			Tim.decrementGrade();
			Helge.incrementGrade();
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl ;
		}
		std::cout << Tim << std::endl;
		std::cout << Helge << std::endl;

		std::cout << std::endl << std::endl;
	}
	std::cout << std::endl << "------------------------------------" << std::endl;
	{
		try{
			Bureaucrat Lisa("Lisa", 1);
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}
		Bureaucrat	Lisa("Lisa2", 1);
		try{
			Lisa.incrementGrade();
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl;
		}

		std::cout << std::endl << std::endl;
	}
	return 0;
}