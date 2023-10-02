#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	print_out(T obj)
{
	std::cout << obj << std::endl;
}

template <typename T>
void	iter(T *array, size_t length, void f (T))
{
	if (!array)
		return ;
	for (size_t i = 0; i < length; i++)
			f(array[i]);
}

#endif