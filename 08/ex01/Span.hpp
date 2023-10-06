#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <list>
class Span
{
	private:
		size_t			_n;
		std::list <int>	_arr;
	public:
		Span(){};
		Span(size_t n): _n(n)
			{};
		Span(const Span & rhs): _n(rhs._n), _arr(rhs._arr)
			{};
		~Span(){};
		//add assignment
		void	addNumber(int i);
};

void	Span::addNumber(int i)
{
	_arr.push_front(i);
}

#endif