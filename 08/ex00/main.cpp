/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:34:40 by vlenard           #+#    #+#             */
/*   Updated: 2023/10/06 14:31:28 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int main()
{
	std::vector<int> arr(10 , 20);
	arr.push_back(4);
	
	int n;
	n = easyfind(arr, 4);
	std::cout << n << std::endl;
	return 0;
}