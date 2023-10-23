/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:34:36 by vlenard           #+#    #+#             */
/*   Updated: 2023/10/23 15:24:49 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include <sstream>


void	addPair(std::vector< std::vector<int> > & pairs, char *s1, char *s2)
{
	std::vector<int> pair;
	int i1;
	int i2;
	std::stringstream ss(s1);
	std::stringstream sss(s2);
	ss >> i1;
	sss >> i2;
	if (i1 > i2)
	{
		pair.push_back(i1);
		pair.push_back(i2);
	}
	else
	{
		pair.push_back(i2);
		pair.push_back(i1);
	}
	pairs.push_back(pair);
}

void	createPairArray(std::vector< std::vector<int> > & pairs, int argc, char **argv)
{
	int n = 0;
	for (int i = 1; i + 2 < argc ; i += 2)
	{
		addPair(pairs, argv[i], argv[i + 1]);
		n++;
	}
}

void	sortPairArray(std::vector< std::vector<int> > & pairs)
{
	//sort pairs recursively: 7, 3, 2.
	int flag = 1;
	while (flag == 1)
	{
		flag = 0;
		for (size_t i = 0; i < pairs.size(); i++)
		{
			if (i > 0 && pairs[i][0] < pairs[i - 1][0])
			{
				std::swap(pairs[i], pairs[i - 1]);
				flag = 1;
			}
		}
	}
	
}

void	sortHighest(std::vector<int> & arr, std::vector< std::vector<int> > pairs)
{
	for (size_t i = 0; i < pairs.size(); i++)
		arr.push_back(pairs[i][0]);
}

// void	addToArray(std::vector<int> & arr, int i)
// {
// 	arr.push_back(i);
// }

int	Jac(int i)
{
	if (i == 0)
		return 0;
	if (i == 1)
		return 1;
	return Jac(i - 1) + 2 * Jac(i - 2);
}

void	sortLowest(std::vector<int> & arr, std::vector< std::vector<int> > pairs)
{
	for (size_t i = 0; i < pairs.size(); i++)
	{
		//add jacobsthal index to array
	}
}

int main(int argc, char **argv)
{
	std::vector< std::vector<int> > pairs;
	std::vector<int> arr;

	createPairArray(pairs, argc, argv);
	sortPairArray(pairs);
	sortHighest(arr, pairs);
	sortLowest(arr, pairs);

	//PRINT
	for (int i = 0; i < (argc - 1) / 2; i++)
		std::cout << pairs[i][0] << " " << pairs[i][1] << std::endl;
	std::cout << "---------" << std::endl;
	for (size_t i = 0; i < arr.size(); i++)
		std::cout << arr[i] << std::endl;
	return 0;
}
