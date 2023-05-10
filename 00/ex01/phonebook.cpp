/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:52:25 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/10 19:21:38 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook(void)
{
	current_page = 0;
	number_contacts = 0;
	return ;
}

void	PhoneBook::add(void)
{
	std::cout << "Please enter:" << std::endl << std::endl;
	std::cout << "first name:" << std::endl;
	std::cin >> contact[current_page].first_name;
	std::cout << "last name:" << std::endl;
	std::cin >> contact[current_page].last_name;
	std::cout << "nickname:" << std::endl;
	std::cin >> contact[current_page].nickname;
	std::cout << "phone number:" << std::endl;
	std::cin >> contact[current_page].phone_number;
	std::cout << "darkest secret:" << std::endl;
	std::cin >> contact[current_page].darkest_secret;
	contact[current_page].index = current_page;
	if (current_page < 7)
	{
		this->current_page++;
		this->number_contacts++;
	}
	else
		this->current_page = 0;
	std::cout << "Contact added to phonebook" << std::endl;
	return ;
}

void	PhoneBook::display_contact_row(ContactClass contact)
{
	std::cout << std::setw(10) << std::right << contact.index << "|";  
	std::cout << std::setw(10) << std::right << contact.first_name << "|";
	std::cout << std::setw(10) << std::right << contact.last_name << "|";
	std::cout << std::setw(10) << std::right << contact.nickname << std::endl;
}

void	PhoneBook::search(void)
{
	std::cout <<"     index|first name| last name|  nickname";
	std::cout << std::endl;
	for(int	i = 0; i < number_contacts; i++)
		this->display_contact_row(this->contact[i]);
	
}

// void	print_contact(PhoneBook phonebook, int	i)
// {
// 	std::cout << phonebook.contact[i].first_name << std::endl;
// 	std::cout << phonebook.contact[i].last_name << std::endl;
// 	std::cout << phonebook.contact[i].nickname << std::endl;
// 	std::cout << phonebook.contact[i].phone_number << std::endl;
// 	std::cout << phonebook.contact[i].darkest_secret << std::endl;
// }

int	main (void)
{
	PhoneBook	phonebook;
	std::string command;
	do
	{
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
