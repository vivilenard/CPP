/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 11:03:31 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/22 11:26:55 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
	std::string s = "HI THIS IS BRAIN";
	
	std::string *stringPTR = &s;
	std::string& stringREF = s;

	std::cout << "address" << std::endl;
	std::cout << "original string       " << &s << std::endl;
	std::cout << "pointer to string     " << stringPTR << std::endl;
	std::cout << "reference to string   " << &stringREF << std::endl;

	std::cout << "value:" << std::endl;
	std::cout << "original string       " << s << std::endl;
	std::cout << "pointer to string     " << *stringPTR << std::endl;
	std::cout << "reference to string   " << stringREF << std::endl;
	return 0;
}
