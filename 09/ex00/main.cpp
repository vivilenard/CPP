/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:40:28 by vlenard           #+#    #+#             */
/*   Updated: 2023/10/16 11:14:59 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btc.hpp"

void parse(int argc, char **argv, std::ifstream & file)
{
	if (argc != 2)
		throw(std::invalid_argument("Please include a file as parameter"));
	file.open(argv[1], std::ios::in);
	if (!file.is_open())
		throw(InputException());
}

void	AddToMap(std::map<std::string, int>m, std::string line)
{
	char *half;

}

int	main(int argc, char **argv)
{
	std::ifstream file;
	std::map<std::string, int> m;
	parse(argc, argv, file);
	std::string line;
	while (getline(file, line))
	{
		AddToMap(m, line.c_str());
		std::cout << line << std::endl;
	}
	file.close();
	return 0;
}