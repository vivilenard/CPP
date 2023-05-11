/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:33:52 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/11 14:52:47 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main (void)
{
	PhoneBook	phonebook;
	std::string	command;
	do
	{
		std::cout << "type ADD SEARCH or EXIT to use this pretty phonebook" << std::endl;
		std::cin >> command;
		if (command == "ADD")
			phonebook.add();
		if (command == "SEARCH")
			phonebook.search();
	} while (command != "EXIT");

	// for (int i = 0; i <= 10; i++)
	// 	print_contact(phonebook, i);

	return 0;
}
