/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/28 14:52:59 by vlenard           #+#    #+#             */
/*   Updated: 2023/09/28 14:53:00 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialisation.hpp"

int main()
{
	Data data;
	uintptr_t ptr;

	data.i = 9;
	ptr = Serialize::serialize(&data);
	data = *Serialize::deserialize(ptr);

	std::cout << data.i << std::endl;
	return 0;
}