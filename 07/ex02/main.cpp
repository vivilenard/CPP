/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 16:59:29 by vlenard           #+#    #+#             */
/*   Updated: 2023/10/04 13:30:28 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.cpp"

void test()
{
{
	Array<int> b(8);
	Array<int> a(b);

	std::cout << a.size() << std::endl;
	a[0] = 6; a[1] = 9; a[2] = 7;
	for (size_t i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;
	std::cout << std::endl;
}
{
	Array<int> a;
	try
	{
		std::cout << "print empty: " << a[0] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
{
	Array<std::string> a(2);
	a[0] = "hi"; a[1] = "du ";
	for (size_t i = 0; i < a.size(); i++)
		std::cout << a[i] << std::endl;

	Array<std::string> b(5);
	b = a;
	for (size_t i = 0; i < b.size(); i++)
		std::cout << b[i] << std::endl;
}
}

int main()
{
	test();
	//system ("leaks Array");
	return 0;
}