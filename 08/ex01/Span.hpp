#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <set>
#include <stdlib.h>

class Span
{
	private:
		unsigned int	_n;
		std::set<int>	_set;
	public:
		Span();
		Span(unsigned int n);
		Span(const Span & rhs);
		~Span();

		void	addNumber(int i);
		void	addNumbers(unsigned int amount);
		void	printSet();
		int		shortestSpan();
		int		longestSpan();

		class	ArrayTooSmallException: public std::exception
		{
			public:
				const char *what() const throw();
		};

		Span & operator=(const Span & rhs);
};

#endif