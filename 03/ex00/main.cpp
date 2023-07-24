/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:04:42 by vlenard           #+#    #+#             */
/*   Updated: 2023/06/09 18:49:27 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	Hanna("Hanna");
	ClapTrap	Ella("Ella");

	ClapTrap	Shapeshifter = Ella;
	std::cout << Hanna << std::endl;
	Hanna.attack("Yoda");
	std::cout << Hanna << std::endl;
	Hanna.takeDamage(8);
	Hanna.takeDamage(5);
	Hanna.attack("Fred");
	for (int i = 0; i <= 9; i++)
		Hanna.beRepaired(1);
	std::cout << Hanna << std::endl;
	Hanna.attack("Fred");

	ClapTrap	Shapeshifter2(Hanna);
	std::cout << Shapeshifter2 << std::endl;
	std::cout << std::endl;
}