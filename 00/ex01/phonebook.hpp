/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:52:58 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/11 17:33:11 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>

class	ContactClass
{

	public:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
	int			index;
		int			getIndex() { return index; }
		std::string	getFirstName() { return first_name; }
		std::string	getLastName() { return last_name; }
		std::string getNickname() { return nickname; }
		std::string getPhoneNumber() { return phone_number; }
		std::string getDarkestSecret() { return darkest_secret; }

		void		setIndex(int i) { index = i; }
		void		setFirstName(std::string s) { first_name = s; }
		void		setLastName(std::string s) { last_name = s; }
		void		setNickname(std::string s) { nickname = s; }
		void		setPhoneNumber(std::string s) { phone_number = s; }
		void		setDarkestSecret(std::string s) { darkest_secret = s; }
		// Contact();
		// ~Contact();
};


class	PhoneBook
{
	public:
		ContactClass	contact[8];
		int				current_page;
		void			add(void);
		void			search(void);
		void			display_contact_row(ContactClass contact);
		void			print_contact(int i);
		std::string		cutword(std::string s);
		int				number_contacts;
		PhoneBook();
};

# endif