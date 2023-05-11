/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:52:58 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/11 14:53:08 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <iomanip>

class	ContactClass
{
	public:
		int			index;
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
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