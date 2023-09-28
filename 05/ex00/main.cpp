/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:08:14 by vlenard           #+#    #+#             */
/*   Updated: 2023/09/28 12:29:35 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	{

		try{
			Bureaucrat	Tim("Tim", 149);
			Bureaucrat	Helge(Tim);
			Helge.incrementGrade();
			Tim.decrementGrade();
			Helge.incrementGrade();
			std::cout << Tim << std::endl;
			std::cout << Helge << std::endl;

			std::cout << std::endl << std::endl;
		}
		catch (std::exception &e){
			std::cout << e.what() << std::endl ;
		}
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