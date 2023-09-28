#ifndef SWAP_HPP
#define SWAP_HPP

template <typename Y>
void	swap(Y & a, Y & b)
{
	Y tmp = a;
	a = b;
	b = tmp;
}

#endif