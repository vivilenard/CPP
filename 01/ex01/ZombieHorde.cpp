/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:11:26 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/20 16:28:01 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	if (N < 1 || N > 500)
		return NULL;

	Zombie* zombie = new Zombie[N];
	for(int i = 0; i < N; i++)
		zombie[i].setName(name);
	return (zombie);
}
