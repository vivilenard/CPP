/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:34:36 by vlenard           #+#    #+#             */
/*   Updated: 2023/10/20 13:49:48 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>

int main()
{
	std::vector<int*> pairs;
	int k[2] = {1, 2};
	pairs.push_back(k);
	std::cout << pairs[0][0] << std::endl;
	return 0;
}