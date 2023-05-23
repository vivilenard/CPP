/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:05:27 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/20 16:27:00 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main (int argc, char **argv)
{
	if (argc != 3)
	{
		std::cout << "Please enter 2 Parameters: 'Number of Zombies' and 'Name'" << std::endl;
		return 0;
	}
		
	Zombie* zombie = zombieHorde(std::atoi(argv[1]), argv[2]); 
	
	for (int i = 0; i < std::atoi(argv[1]); i++)
		zombie[i].announce();

	if (zombie)
		delete [] zombie;
	return 0;
}