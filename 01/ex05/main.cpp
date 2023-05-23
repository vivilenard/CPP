/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:15:35 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/20 14:27:15 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Harl.hpp"

int	main ()
{
	Harl	harl;
	
	harl.complain("debug");
	std::cout << std::endl;
	harl.complain("info");
	std::cout << std::endl;
	harl.complain("warning");
	std::cout << std::endl;
	harl.complain("error");
	std::cout << std::endl;
	harl.complain("lol");
	std::cout << std::endl;
	harl.complain("bye");
	return 0;
}