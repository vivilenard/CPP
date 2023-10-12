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
	if (_set.size() >= _n)
	{
		std::cout << "Max amount of numbers reached" << std::endl;
		return;
	}
	_set.insert(i);
}

void	Span::addNumbers(size_t amount)
{
	size_t i = 0;
	int	highestNumber = 100;
	while (i <= amount && _set.size() <= _n)
	{
		_set.insert(rand() % highestNumber);
		i++;
	}
}

void	Span::printSet()
{
	std::cout << "Set: " << std::endl;
	for(std::set<int>::iterator itr = _set.begin(); itr != _set.end(); ++itr)
		std::cout << *itr << std::endl;
}

int	Span::longestSpan()
{
	if (_set.size() < 2)
		return (-1);
	return (*(_set.rbegin()) - *(_set.begin()));
}

int	Span::shortestSpan()
{
	int shortest_span = INT_MAX;
	if (_set.size() < 2)
		return (-1);
	std::set<int>::iterator itr = _set.begin();
	while (++itr != _set.end())
	{
		int span = *itr - *--itr;
		if (span < shortest_span) shortest_span = span;
		itr++;
	}
	return (shortest_span);
}