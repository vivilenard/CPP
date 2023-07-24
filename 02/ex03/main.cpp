/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 23:03:22 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/30 14:08:44 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main( void )
{
	std::cout << "Triangle 1: \n";
	Point a1(2.5f, 1.5f);
	std::cout << "A " << a1 << std::endl;
	Point b1(7.0f, 1.5f);
	std::cout << "B " << b1 << std::endl;
	Point c1(3.5f, 9.0f);
	std::cout << "C " << c1 << std::endl;

	Point p1(4.0f, 3.5f);	//true
	//Point p2(10.0f, 3.5f);	//false
	
	if (bsp(a1, b1, c1, p1) == true)
		std::cout << "Point " << p1 << " is inside" << std::endl;
	else
		std::cout << "Point " << p1 << " is outside" << std::endl;

	std::cout << "\nTriangle 2: \n";
	Point a2(-2.0f, 10.0f);
	std::cout << "A " << a2 << std::endl;
	Point b2(7.0f, -3.0f);
	std::cout << "B " << b2 << std::endl;
	Point c2(10.0f, 9.0f);
	std::cout << "C " << c2 << std::endl;

	//Point p3(5.0f, 3.0f);	//true
	Point p4(8.0, 0.0f);	//false
	if (bsp(a1, b1, c1, p4) == true)
		std::cout << "Point " << p4 << " is inside" << std::endl;
	else
		std::cout << "Point " << p4 << " is outside" << std::endl;

	return (0); 
}
