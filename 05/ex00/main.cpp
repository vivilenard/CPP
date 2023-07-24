/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:08:14 by vlenard           #+#    #+#             */
/*   Updated: 2023/07/24 14:36:52 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	b1("tim", 150);
	try{
		b1.decrementGrade();
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl ;
	}
	return 0;
}