/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:59:29 by vlenard           #+#    #+#             */
/*   Updated: 2023/10/03 14:20:05 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.cpp"

int main()
{
	Array<int> *a = new Array<int>(8);
	Array<int> *b = new Array<int>(4);
	Array<int> *c = new Array<int>(*a);
	std::cout << a->getLength() << std::endl;
	//b = a;
	std::cout << b->getLength() << std::endl;
	std::cout << c->getLength() << std::endl;
	return 0;
}