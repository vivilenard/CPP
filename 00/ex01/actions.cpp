/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 12:33:52 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/12 16:46:06 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	PhoneBook::add(void)
{
	std::cout << "first name:	";
	contact[current_page].setFirstName(get_instream());
	std::cout << "last name:	";
	contact[current_page].setLastName(get_instream());
	std::cout << "nickname:	";
	contact[current_page].setNickname(get_instream());
	std::cout << "phone number:	";
	contact[current_page].setPhoneNumber(get_instream());
	std::cout << "darkest secret:	";
	contact[current_page].setDarkestSecret(get_instream());
	contact[current_page].setIndex(current_page);
	if (current_page < 7)
	{
		this->current_page++;
		this->number_contacts++;
	}
	else
		this->current_page = 0;
	std::cout << "Contact added to phonebook" << std::endl;
}

void	PhoneBook::print_contact(int i)
{
	if (i < 1 || i > 8)
	{
		std::cout << "Search with a valid number between 0 and 7" << std::endl;
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
	
	std::cout << std::setw(10) << std::right << contact.getIndex() << "|";  
	std::cout << std::setw(10) << std::right << cutword(contact.getFirstName()) << "|";
	std::cout << std::setw(10) << std::right << cutword(contact.getLastName()) << "|";
	std::cout << std::setw(10) << std::right << cutword(contact.getNickname()) << std::endl;
}

void	PhoneBook::search(void)
{
	std::string index;

	std::cout <<"     index|first name| last name|  nickname";
	std::cout << std::endl;
	for(int	i = 0; i < number_contacts; i++)
		this->display_contact_row(this->contact[i]);
	std::cout << "Which contact do you want to look at?" << std::endl;
	std::cout << "Choose between 1 - 8:	" << std::endl;
	std::getline(std::cin, index);
	print_contact(atoi(index.c_str()));
}