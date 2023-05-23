/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 11:47:48 by vlenard           #+#    #+#             */
/*   Updated: 2023/05/22 12:38:40 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

void	input(std::string& filename, std::string& s1, std::string& s2)
{
	std::cout << "Please enter the name of the file you would like to read from: " << std::endl;
	std::cin >> filename;

	std::cout << "Please enter the word you would like to replace:" << std::endl;
	std::cin >> s1;

	std::cout << "With which word would you like to replace it?" << std::endl;
	std::cin >> s2;
}

void	replace(std::ifstream& inStream, std::ofstream& outStream, std::string s1, std::string s2)
{
	std::string		line;
	size_t			pos = 0;

	while (std::getline(inStream, line))
	{
		do{
			pos = line.find(s1, pos);
			if (pos != std::string::npos)
			{
				line.erase(pos, s1.length());
				line.insert(pos, s2);
			}
		}while (pos != std::string::npos);
		outStream << line << std::endl;
		pos = 0;
	}
}

int	main()
{
	std::string filename;
	std::string	s1;
	std::string s2;
	
	input(filename, s1, s2);
	std::ifstream	inStream(filename);
	std::ofstream	outStream(filename + ".replace");

	if (inStream.is_open() && outStream.is_open())
		replace(inStream, outStream, s1, s2);
	else
	{
		if (inStream.is_open() == false)
			std::cout << "unable to read from infile \n";
		else if (!outStream.is_open() == false)
			std::cout << "unable to open outfile \n";
	}
	inStream.close();
	outStream.close();
	return 0;
}