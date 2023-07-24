/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:04:42 by vlenard           #+#    #+#             */
/*   Updated: 2023/06/09 18:39:49 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main()
{
	ScavTrap Hugo("Hugo");
	std::cout << Hugo << std::endl;

	Hugo.attack("DarkVader");
	Hugo.takeDamage(70);
	Hugo.beRepaired(5);

	ScavTrap Hugo2 = Hugo;
	std::cout << Hugo2 << std::endl;
	Hugo.guardGate();
	std::cout << std::endl;
}