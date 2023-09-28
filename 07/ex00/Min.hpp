#ifndef MIN_HPP
#define MIN_HPP

template <typename Y>
Y const & min(Y const & a, Y const & b)
{
	return a <= b ? a : b;
}

#endif