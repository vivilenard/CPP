/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:15:11 by vlenard           #+#    #+#             */
/*   Updated: 2023/10/18 11:22:18 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int		parse(std::string & s)
{
	std::cout << "parse" << std::endl;
	if (s.find_first_not_of("0123456789+-*/ /t") != std::string::npos)
		return 0;
	return 1;
}

void	addToStack(std::stack<int> & s, int n)
{
	std::cout << "add to top " << n << std::endl;
	s.push(n);
	std::cout << s.top() << std::endl;
}

int		isNumber(char c)
{
	if (isdigit(c))
		return 1;
	else return 0;
}

int		isOperator(char c)
{
	static const char * op = "+-/*";
	if (strchr(op, c))
		return 1;
	return 0;
}

void	operateStack()
{
}

int	RPN(std::string & str)
{
	if (!parse(str))
		return std::cout << "Input Error" << std::endl, 0;
	std::stack<int> s;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (isNumber(str.at(i)))
			addToStack(s, str.at(i) - '0');
		else if (isOperator(str.at(i)))
			operateStack();
	}
	return 1;
}


int	main(int argc, char **argv)
{
	if (argc != 2)
		return 0;
	std::string s(argv[1]);
	RPN(s);
	
	return 0;
}