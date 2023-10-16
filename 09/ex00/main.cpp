/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:40:28 by vlenard           #+#    #+#             */
/*   Updated: 2023/10/16 10:42:32 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btc.hpp"
#include <iostream>
#include <fstream>

int	main(int argc, char **argv)
{
	std::ifstream file;

	if (argc != 2)
		throw(std::invalid_argument("Please include a file as parameter"));
	file.open(argv[1], std::ios::in);
	if (!file.is_open())
		throw(InputException());
	std::string line;
	getline(file, line);
		std::cout << line << std::endl;
	while (getline(file, line))
		std::cout << line << std::endl;
	file.close();
	return 0;
}