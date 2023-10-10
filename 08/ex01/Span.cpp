#include "Span.hpp"

Span::Span()
{}

Span::Span(size_t n): _n(n)
{}

Span::Span(const Span & rhs): _n(rhs._n), _set(rhs._set)
{}

Span::~Span()
{}

void	Span::addNumber(int i)
{
	_set.insert(i);
}

void	Span::printSet()
{
	for(std::set<int>::iterator itr = _set.begin(); itr != _set.end(); itr++)
		std::cout << *itr << std::endl;
}

int	Span::shortestSpan()
{
	//std::set<int>::iterator itr = _set.begin();
	if (_set.size() < 2)
		return (-1);
	// for (itr; itr != _set.end(); itr++)
	// 	;

	return (*(_set.rbegin()) - *(_set.begin()));
}

int	Span::longestSpan()
{
	if (_set.size() < 2)
		return (-1);
	return (1);
}