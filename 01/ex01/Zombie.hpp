/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:06:11 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/20 16:09:27 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string _name;
		
	public:
		void	announce (void);
		void	setName(std::string name);
		Zombie();
		~Zombie();
		
};

Zombie*	zombieHorde( int N, std::string name );

# endif