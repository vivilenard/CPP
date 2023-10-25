/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:34:36 by vlenard           #+#    #+#             */
/*   Updated: 2023/10/25 18:28:24 by vlenard          ###   ########.fr       */
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

std::vector<int> JacOrder(int nPairs)
{
	std::vector<int> j;
	j.push_back(0);
	j.push_back(1);
	//std::cout << j[0] << std::endl;
	//std::cout << j[1] << std::endl;
	for (size_t i = 3; j.size() < (size_t) nPairs; ++i)
	{
		int num = Jac(i);
		if (num < nPairs)
		{
			j.push_back(num);
			//std::cout << num << " " << Jac(i - 1) << std::endl;
		}
		while (--num > Jac(i - 1))
		{
			if (num < nPairs)
			{
				j.push_back(num);
				//std::cout << num << " " << Jac(i - 1) << std::endl;
			}
		}
		//std::cout << "loop" << std::endl;
	}
	return j;
}

void	sortLowest(std::vector<int> & arr, std::vector< std::vector<int> > pairs)
{
	std::vector<int> jac = JacOrder(pairs.size());
	for (size_t i = 0; i < pairs.size(); i++)
		std::cout << jac[i] << std::endl;
	std::cout << "sort lowesst" << std::endl;
	arr.insert(arr.begin(), pairs[0][1]);
	for (size_t i = 1; i < 3; i++)
	{
		int n = jac[i];
		int num = pairs[n][1];
		while (num < arr[n] && n > 0)
		{
			n--;
			std::cout << "number: " << num << " n: " << n << " array[n] " << arr[n] << std::endl;
		}
		arr.insert(arr.begin() + n, num);
		
	}
	// for (size_t i = 1; i < pairs.size(); i++)
	// {
	// 	//std::cout << "pairs size: " << pairs.size() << ", jac: " << jac[i] << " " << arr[0] << pairs.size() << std::endl;
	// 	int n = pairs[jac[i]][1]; std::cout << n << " at " << jac[i] << std::endl;
	// 	for (int j = jac[i]; j >= 0; j--)
	// 		if (n <= arr[j])
	// 		{
	// 			arr.insert(arr.begin() + j, n);
	// 			break;
	// 		}
	// }
}

int main(int argc, char **argv)
{
	std::vector< std::vector<int> > pairs;
	std::vector<int> arr;

	if (argc <= 1)
		return 0;
	createPairArray(pairs, argc, argv);
	sortPairArray(pairs);
	sortHighest(arr, pairs);
	sortLowest(arr, pairs);

	//PRINT
	std::cout << "---------" << std::endl;
	for (int i = 0; i < (argc - 1) / 2; i++)
		std::cout << pairs[i][0] << " " << pairs[i][1] << std::endl;
	std::cout << "---------" << std::endl;
	for (size_t i = 0; i < arr.size(); i++)
		std::cout << arr[i] << std::endl;
	return 0;
}
