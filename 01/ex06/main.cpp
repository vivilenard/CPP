/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:15:35 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/20 15:57:24 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main (int argc, char **argv)
{
	Harl	harl;
	
	if (argc != 2)
	{
		std::cout << "Please enter one parameter. You can choose between: ";
		std::cout << "'DEBUG', 'INFO', 'WARNING' and 'ERROR'." << std::endl;
		return 0;
	}
	harl.complain(argv[1]);
	return 0;
}
