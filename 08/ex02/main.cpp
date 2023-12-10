/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlenard <vlenard@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 17:24:33 by vlenard           #+#    #+#             */
/*   Updated: 2023/10/13 14:40:10 by vlenard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737); //[...] mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	//std::stack<int> s2(mstack);

	std::cout << "More tests:" << std::endl;
	std::stack<int> s;
	s.push(9);
	//std::cout << s.top() << std::endl;
	s.pop();
	std::cout << s.empty() << std::endl;
	std::cout << s.size() << std::endl;
	s.push(7);
	std::cout << s.empty() << std::endl;
	std::cout << s.size() << std::endl;
	return 0;
}