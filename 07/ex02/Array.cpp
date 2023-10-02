#include "Array.hpp"

template <class T>
Array<T>::Array()
{
}

template <class T>
Array<T>::Array(unsigned int n): _length(n)
{
	new T[n];
}

template <class T>
Array<T>::Array(const Array & cpy)
{
	new T;
	T = cpy;
}

template <class T>
const Array<T> & Array<T>::operator=(const Array & rhs)
{
	if (this == &rhs)
		return *this;
	*this->_array = rhs->_array;
	*this->_length = rhs->_length;
}

template <class T>
Array<T>::~Array(){}