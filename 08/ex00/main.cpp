/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 13:34:40 by vlenard           #+#    #+#             */
/*   Updated: 2023/10/13 14:09:18 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Easyfind.hpp"

int main()
{
	std::vector <int> arr(10 , 20);
	arr.push_back(4);
	arr.push_back(7);
	arr.insert(arr.begin(), 3);
	
	int n;
	n = easyfind(arr, 4);
	std::cout << "size of container: " << arr.size() << std::endl;
	std::cout << "number found at index: " << n << std::endl;
	return 0;
}