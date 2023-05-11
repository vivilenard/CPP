/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:52:25 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/11 15:07:45 by vlenard          ###   ########.fr       */
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
	std::cout << "first name:	";
	std::cin >> contact[current_page].first_name;
	std::cout << "last name:	";
	std::cin >> contact[current_page].last_name;
	std::cout << "nickname:	";
	std::cin >> contact[current_page].nickname;
	std::cout << "phone number:	";
	std::cin >> contact[current_page].phone_number;
	std::cout << "darkest secret:	";
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

void	PhoneBook::print_contact(int i)
{
	if (i < 0 || i > 7)
		return ;
	std::cout << std::setw(15) << std::left << "index" << std::right << "|";
	std::cout << contact[i].first_name << std::endl;
	std::cout << std::setw(15) << std::left << "first name" << std::right << "|";
	std::cout << contact[i].last_name << std::endl;
	std::cout << std::setw(15) << std::left << "last name" << std::right << "|";
	std::cout << contact[i].nickname << std::endl;
	std::cout << std::setw(15) << std::left << "nickname" << std::right << "|";
	std::cout << contact[i].phone_number << std::endl;
	std::cout << std::setw(15) << std::left << "darkest secret" << std::right << "|";
	std::cout << contact[i].darkest_secret << std::endl;
}

std::string	PhoneBook::cutword(std::string s)
{
	if (s.length() < 10)
		return (s);
	s.erase(9);
	s.append(".");
	return (s);
}

void	PhoneBook::display_contact_row(ContactClass contact)
{
	
	std::cout << std::setw(10) << std::right << contact.index << "|";  
	std::cout << std::setw(10) << std::right << cutword(contact.first_name) << "|";
	std::cout << std::setw(10) << std::right << cutword(contact.last_name) << "|";
	std::cout << std::setw(10) << std::right << cutword(contact.nickname) << std::endl;
}

void	PhoneBook::search(void)
{
	std::string index;

	std::cout <<"     index|first name| last name|  nickname";
	std::cout << std::endl;
	for(int	i = 0; i < number_contacts; i++)
		this->display_contact_row(this->contact[i]);
	std::cout << "Which contact do you want to look at?" << std::endl;
	std::cout << "Enter the index number:";
	std::cin >> index;
	print_contact(atoi(index.c_str()));
	
	
}

int	main (void)
{
	PhoneBook	phonebook;
	std::string	command;
	std::cout << "type 'ADD' 'SEARCH' or 'EXIT' to use this pretty phonebook" << std::endl;
	do
	{
		std::cin >> command;
		if (command == "ADD")
			phonebook.add();
		if (command == "SEARCH")
			phonebook.search();
		std::cout << "what do you want to do next? ";
	} while (command != "EXIT");
	return 0;
}
