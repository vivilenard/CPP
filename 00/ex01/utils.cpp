/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 18:15:38 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/16 18:38:46 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

std::string	get_instream()
{
	std::string line = "";

	while (line == "")
		std::getline(std::cin, line);
	return (line);
}

bool	only_letters(std::string s)
{
	if (s.find_first_not_of(" ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz") != -1)
		return false ;
	return true ;
}

bool	only_digits_plus_extra(std::string s)
{
	if (s.find_first_not_of("+()/ 1234567890") != -1)
		return false ;
	return true ;
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
	std::cout << std::setw(10) << std::right << contact.getIndex() + 1 << "|";  
	std::cout << std::setw(10) << std::right << cutword(contact.getFirstName()) << "|";
	std::cout << std::setw(10) << std::right << cutword(contact.getLastName()) << "|";
	std::cout << std::setw(10) << std::right << cutword(contact.getNickname()) << std::endl;
}
