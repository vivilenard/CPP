/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:15:50 by vlenard           #+#    #+#             */
/*   Updated: 2023/10/13 14:29:07 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try
	{
		Span s(10000);
		s.addNumbers(0);
		s.addNumber(4);
		s.printSet();
		std::cout << "Shortest Span: " << std::endl << s.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << std::endl << s.longestSpan() << std::endl;
		return 0;
	}
	catch (std::exception &e){std::cout << e.what() <<std::endl;}
}