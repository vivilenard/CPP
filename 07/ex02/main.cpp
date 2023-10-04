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
	Array<int> b(8);
	Array<int> a(b);

	std::cout << a.size() << std::endl;
	a[0] = 6; a[1] = 9; a[2] = 7;
	//std::cout << a[0] << std::endl;
	for (size_t i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;
	std::cout << std::endl;
	return 0;
}