/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:52:58 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/12 18:21:13 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>
# include <string>

class	ContactClass
{
	private:
		int			index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
	public:
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
};


class	PhoneBook
{
	private:
		static const int	n_contacts = 8;
		ContactClass		contact[n_contacts];
		void				display_contact_row(ContactClass contact);
		void				print_contact(int i);
		std::string			cutword(std::string s);
	public:
		void				add(void);
		void				search(void);
};

std::string	get_instream();

# endif