/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:04:42 by vlenard           #+#    #+#             */
/*   Updated: 2023/06/09 18:53:39 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	FragTrap Hugo("Hugo");
	std::cout << Hugo << std::endl;

	Hugo.attack("DarkVader");
	Hugo.takeDamage(70);
	Hugo.beRepaired(5);

	FragTrap Hugo2 = Hugo;
	std::cout << Hugo2 << std::endl;
	Hugo.highFivesGuys();

	std::cout << std::endl;
}