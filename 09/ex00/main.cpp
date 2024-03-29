/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 09:40:28 by vlenard           #+#    #+#             */
/*   Updated: 2023/10/30 14:49:49 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "btc.hpp"

void input(int argc, char **argv, std::ifstream & file1, std::ifstream & file2)
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
	m[half1] = value;
	return 0;
}

int ValidDate(std::string s)
{
	struct tm time;

	if (strptime(s.c_str(), "%Y-%m-%d", &time))
		return 1;
	return 0;
}

int ParseInput(std::string line, std::string& half1, double & d)
{
	std::string half2;

	size_t pos_end = line.size();
	size_t pos_del = line.find(" ", 0);
	if (pos_del == std::string::npos)
		return std::cout << "Error: Bad input => " << line << std::endl, -1;
	size_t jump;
	for (jump = 0; (line[pos_del + jump] == ' ' || line[pos_del + jump] == '|'); jump++);
	half1 = line.substr(0, pos_del);
	half2 = line.substr(pos_del + jump, pos_end - pos_del);

	if (!ValidDate(half1))
		return std::cout << "Error: Date is not valid => " << half1 << std::endl, -1;
	std::stringstream ss(half2);
	ss >> d;
	if (d == 0 && !isdigit(half2[0]))
		return std::cout << "Error: Not a number." << std::endl, -1;
	if (d < 0)
		return std::cout << "Error: Not a positive number." << std::endl, -1;
	if (d > 1000)
		return std::cout << "Error: Too large a number." << std::endl, -1;
	return 0;
}

std::string GetClosestDate(std::map<std::string, double>m, std::string date)
{
	std::map<std::string, double>::iterator it = m.lower_bound(date);
	std::map<std::string, double>::iterator begin = m.begin();
	if (it == begin)
		return "";
	(--it);
	if (m.count(it->first))
	{
		date = it->first;
		return date;
	}
	return "";
}

int	MatchDate(std::map<std::string, double>m, std::string line)
{
	double d;
	std::string date;
	if (ParseInput(line, date, d) < 0)
		return -1;
	std::map<std::string, double>::iterator it = m.find(date);
	if (it == m.end())
		date = GetClosestDate(m, date);
	if (date.size() == 0)
		return std::cout << "Error: At this date the Bitcoin wasn't born yet." << std::endl, 0;
	std::cout << date << " => " << d << " = " << m[date] * d << std::endl;
	return 0;
}

int	main(int argc, char **argv)
{
	try 
	{
		std::ifstream file_data;
		std::ifstream file_input;
		std::map<std::string, double> m;
		input(argc, argv, file_data, file_input);
		std::string line;
		while (getline(file_data, line))
			AddToMap(m, line);
		getline(file_input, line);
		while (getline(file_input, line))
			MatchDate(m, line);
		file_data.close();
		file_input.close();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
	
}