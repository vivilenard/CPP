#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

void    iter(std::string & array, size_t length, int f(int))
{
    for (size_t i = 0; i < length; i++)
    {
        std::cout << array[i] << std::endl;
        f(array.at(i));
        std::toupper(array[i]);
        std::cout << array[i] << std::endl;
    }
}

#endif