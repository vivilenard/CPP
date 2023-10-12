/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:15:50 by vlenard           #+#    #+#             */
/*   Updated: 2023/10/12 17:12:55 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span s(10000);
	s.addNumbers(10000);
	s.printSet();
	std::cout << "Shortest Span: " << std::endl << s.shortestSpan() << std::endl;
	std::cout << "Longest Span: " << std::endl << s.longestSpan() << std::endl;
	return 0;
}