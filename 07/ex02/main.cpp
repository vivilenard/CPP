/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:59:29 by vlenard           #+#    #+#             */
/*   Updated: 2023/10/03 15:35:07 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.cpp"

int main()
{
	Array<int> *a = new Array<int>(8);
	std::cout << a->getLength() << std::endl;

	a[0] = 6; a[1] = 9; //a[2] = 7;
	// for (int i = 0; i < 3; i++)
	// 	std::cout << a[i];
	// std::cout << std::endl;
	return 0;
}