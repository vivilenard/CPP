/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 23:06:11 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/20 16:21:39 by vlenard          ###   ########.fr       */
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
		Zombie(std::string _name);
		~Zombie();
		
};

void randomChump( std::string name );
Zombie* newZombie( std::string name );

# endif