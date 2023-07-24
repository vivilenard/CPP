/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 23:03:22 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/29 16:38:55 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	std::cout << Fixed::max( a, b ) << std::endl;
	
	return 0;
}

// int main( void )
// {
// 	Fixed const a(Fixed(10) + Fixed(7));
// 	std::cout << "a is " << a << std::endl;

// 	std::cout << "b is " << Fixed(11) - Fixed(12) << std::endl;
	
// 	std::cout << "c is " << Fixed(0.1f) * Fixed(0.5f) << std::endl;
	
// 	Fixed const d((Fixed(1) / Fixed(5)));

// 	std::cout << "d is " << d << std::endl;
// 	//std::cout << float(1) / float(5) << std::endl;

// 	std::cout << "e is " << (Fixed(40) > Fixed(4)) << std::endl;
// 	std::cout << "e is " << (Fixed(40) > Fixed(44)) << std::endl; 

// 	std::cout << "f is " << (Fixed(40) < Fixed(4)) << std::endl;
// 	std::cout << "f is " << (Fixed(40) < Fixed(44)) << std::endl;

// 	std::cout << "g is " << (Fixed(40) >= Fixed(40)) << std::endl;

// 	std::cout << "h is " << (Fixed(40) <= Fixed(4)) << std::endl;

// 	std::cout << "i is " << (Fixed(40) == Fixed(40)) << std::endl;
// 	std::cout << "i is " << (Fixed(40) == Fixed(4)) << std::endl;

// 	std::cout << "j is " << (Fixed(40) != Fixed(40)) << std::endl;
// 	std::cout << "j is " << (Fixed(40) != Fixed(4)) << std::endl;

// 	Fixed const k(80);
// 	Fixed const h(70);
// 	std::cout << "k is " << (Fixed::min(Fixed(40), Fixed(50))) << std::endl;
// 	std::cout << "k is " << (Fixed::min(k, k)) << std::endl;

// 	std::cout << "h is " << (Fixed::max(Fixed(40), Fixed(50))) << std::endl;
// 	std::cout << "h is " << (Fixed::max(k, h)) << std::endl;
// 	return 0;
// }
