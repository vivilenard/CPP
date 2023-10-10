/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:15:50 by vlenard           #+#    #+#             */
/*   Updated: 2023/10/10 15:51:01 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span s(5);
	s.addNumber(3);
	s.addNumber(1);
	s.addNumber(7);
	s.printSet();
	std::cout << s.shortestSpan() << std::endl;
	return 0;
}