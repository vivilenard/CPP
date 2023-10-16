/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:40:28 by vlenard           #+#    #+#             */
/*   Updated: 2023/10/16 13:08:11 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btc.hpp"

void parse(int argc, char **argv, std::ifstream & file1, std::ifstream & file2)
{
	if (argc != 2)
		throw(std::invalid_argument("Please include a file as parameter"));
	file1.open("data.csv", std::ios::in);
	if (!file1.is_open())
		throw(InputException());
	file2.open(argv[1], std::ios::in);
	if (!file2.is_open())
		throw(InputException());
}

int	AddToMap(std::map<std::string, double> & m, std::string line)
{
	std::string half1;
	std::string half2;
	if (std::count(line.begin(), line.end(), ',') > 1)
		return 1;
	size_t pos_start = 0;
	size_t pos_end = line.size();
	size_t pos_del = line.find(",", pos_start);
	half1 = line.substr(pos_start, pos_del - pos_start);
	half2 = line.substr(pos_del + 1, pos_end - pos_del);
	std::stringstream ss; ss << half2;
	double value;
	ss >> value;
	// std::cout << half1 << std::endl << half2 << " into: " 
	// 	<< std::setprecision(8) << value << std::endl;
	m[half1] = value;
	std::cout << std::setprecision(8) << m[half1] << std::endl;
	return 0;
}

int	MatchDate(std::map<std::string, double>m, std::ifstream file)
{
	//check right format

	//take date-string and multiplicator double

	//map[date-string] * multiplicator
	return 0;
}

int	main(int argc, char **argv)
{
	std::ifstream file_data;
	std::ifstream file_input;
	std::map<std::string, double> m;
	parse(argc, argv, file_data, file_input);
	std::string line;
	while (getline(file_data, line))
		AddToMap(m, line.c_str());
	std::cout << "test: " << m["2011-04-17"] << std::endl;
	MatchDate(m, file_input);
	file_data.close();
	file_input.close();
	return 0;
}