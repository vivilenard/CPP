#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <set>

class Span
{
	public:
		Span();
		Span(size_t n);
		Span(const Span & rhs);
		~Span();

		void	addNumber(int i);
		void	printSet();
		int	shortestSpan();
		int	longestSpan();

	private:
		size_t			_n;
		std::set<int>	_set;
};

#endif