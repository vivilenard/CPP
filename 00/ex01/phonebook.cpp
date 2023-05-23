/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:52:25 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/16 18:37:21 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::print_contact(int i)
{
	if (i < 1 || i > this->n_contacts)
	{
		std::cout << "Search with a valid number between 1 and 8" << std::endl;
		return ;
	}
	i-=1;
	std::cout << std::setw(15) << std::left << "first name" << std::right << "|";
	std::cout << contact[i].getFirstName() << std::endl;
	std::cout << std::setw(15) << std::left << "last name" << std::right << "|";
	std::cout << contact[i].getLastName() << std::endl;
	std::cout << std::setw(15) << std::left << "nickname" << std::right << "|";
	std::cout << contact[i].getNickname() << std::endl;
	std::cout << std::setw(15) << std::left << "phone number" << std::right << "|";
	std::cout << contact[i].getPhoneNumber() << std::endl;
	std::cout << std::setw(15) << std::left << "darkest secret" << std::right << "|";
	std::cout << contact[i].getDarkestSecret() << std::endl;
}

void	PhoneBook::search(void)
{
	std::string index;

	std::cout <<"     index|first name| last name|  nickname";
	std::cout << std::endl;
	for(int	i = 0; i < this->n_contacts; i++)
	{
		if (contact[i].getFirstName().empty())
			break;
		this->display_contact_row(this->contact[i]);
	}
	std::cout << "Which contact do you want to look at?" << std::endl;
	std::cout << "Choose between 1 - 8:	" << std::endl;
	std::getline(std::cin, index);
	print_contact(atoi(index.c_str()));
}

void	PhoneBook::add(void)
{
	static int	page = 0;
	do{
		std::cout << "first name:	";
		contact[page].setFirstName(get_instream());
	} while (only_letters(contact[page].getFirstName()) == false);
	
	do{
		std::cout << "last name:	";
		contact[page].setLastName(get_instream());
	} while (only_letters(contact[page].getLastName()) == false);
	
	std::cout << "nickname:	";
	contact[page].setNickname(get_instream());
	
	do{
		std::cout << "phone number:	";
		contact[page].setPhoneNumber(get_instream());
	} while (only_digits_plus_extra(contact[page].getPhoneNumber()) == false);

	std::cout << "darkest secret:	";
	contact[page].setDarkestSecret(get_instream());
	contact[page].setIndex(page);
	if (page < this->n_contacts - 1)
		page++;
	else
		page = 0;
	std::cout << "Contact added to phonebook" << std::endl;
}

int	main (void)
{
	PhoneBook	phonebook;
	std::string	command;

	std::cout << "type 'ADD' 'SEARCH' or 'EXIT' to use this pretty phonebook" << std::endl;
	do
	{
		std::cout << "what do you want to do? ";
		std::getline(std::cin, command);
		if (command == "ADD")
			phonebook.add();
		if (command == "SEARCH")
			phonebook.search();
	} while (command != "EXIT");
	return 0;
}
