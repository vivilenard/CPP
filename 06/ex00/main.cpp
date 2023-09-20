/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 16:39:24 by vlenard           #+#    #+#             */
/*   Updated: 2023/09/20 11:53:28 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int	main(int argc, char **argv)
{
	//ScalarConverter con;
	if (argc != 2)
		return (0);
	std::string s(argv[1]);
	ScalarConverter::convert(s);
	return (0);
}
//char, int, float, double