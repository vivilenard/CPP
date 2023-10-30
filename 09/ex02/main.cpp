/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 13:34:36 by vlenard           #+#    #+#             */
/*   Updated: 2023/10/30 11:18:02 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv)
{
	std::vector<int> arr;
	double	time1 = clock_gettime_nsec_np(CLOCK_REALTIME);
	SortVector(argc, argv);
	double	time2 = clock_gettime_nsec_np(CLOCK_REALTIME);
	SortList(argc, argv);
	double	time3 = clock_gettime_nsec_np(CLOCK_REALTIME);
	
	std::cout << "Before:	";
	for (int i = 1; i < argc; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl << "After:	";
	arr = SortVector(argc, argv);
	for (size_t i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	std::cout << "Vector sorting:	" << std::setprecision(3) << (time2 - time1) / 1000000 << "ns" <<std::endl;
	std::cout << "List sorting:	" << std::setprecision(3) << (time3 - time2) / 1000000 << "ns" <<std::endl;
}

//`jot -r 3000 1 1000 | tr '\n' ' '`