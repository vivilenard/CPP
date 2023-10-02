#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename func>
void	iter(std::string & array, size_t length, func f)
{
	f(array, length);
}


#endif