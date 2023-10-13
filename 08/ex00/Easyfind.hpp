#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>

template<typename T>
int easyfind(T arr, int n)
{
	size_t find;
	find = std::find(arr.begin(), arr.end(), n) - arr.begin();
	if (find < arr.size())
		return find;
	return -1;
}

#endif