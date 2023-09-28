#ifndef MAX_HPP
#define MAX_HPP

template <typename Y>

Y const & max(Y const & a, Y const & b)
{
	return a >= b ? a : b;
}

#endif