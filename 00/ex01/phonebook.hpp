/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 14:52:58 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/10 19:16:25 by vlenard          ###   ########.fr       */
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
		int				number_contacts;
		void			add(void);
		void			search(void);
		void			display_contact_row(ContactClass contact);
		
		PhoneBook();
};

//void	print_contact(int i);
# endif