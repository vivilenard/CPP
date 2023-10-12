#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <set>
#include <stdlib.h>
#include <limits.h>

class Span
{
	public:
		Span();
		Span(size_t n);
		Span(const Span & rhs);
		~Span();

		void	addNumber(int i);
		void	addNumbers(size_t amount);
		void	printSet();
		int		shortestSpan();
		int		longestSpan();

	private:
		size_t			_n;
		std::set<int>	_set;
};

#endif