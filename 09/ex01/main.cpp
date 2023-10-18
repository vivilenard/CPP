/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:15:11 by vlenard           #+#    #+#             */
/*   Updated: 2023/10/18 10:44:57 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int	parse(int argc, char **argv)
{
	std::cout << "parse" << std::endl;
	for (int i = 1; i < argc; ++i)
	{
		std::string s(argv[i]);
		std::cout << s << std::endl;
		if (s.find_first_not_of("0123456789+-/*") != std::string::npos)
			return 0;
	}
	return 1;
}

int	addToStack(std::stack<int> & s,int i, std::string str)
{
	int	i; char c;
	std::stringstream ss(str);
	if (str.find_first_of("1234567890") != std::string::npos)
	{
		ss >> i;
		s.push(i);
	}
	else if (str.find_first_of("+-/*"))
	{
		ss >> c;
	}
	else
		return 0;
	return 1;
}

int	RPN(int argc, char **argv)
{
	if (!parse(argc, argv))
		return std::cout << "Input Error" << std::endl, 0;
	std::stack<int> s;

	for (int i = 1; i < argc; ++i)
	{
		std::string s(argv[i]);
		addToStack(i, s);
	}
	return 1;
}


int	main(int argc, char **argv)
{
	if (argc < 2)
		return 0;
	RPN(argc, argv);
	return 0;
}