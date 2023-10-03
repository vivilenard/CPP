#include "Array.hpp"

template <typename T>
Array<T>::Array(): _length(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n): _length(n)
{
	T * a = new T[n];
	_array = a;
}

template <typename T>
Array<T>::Array(const Array & cpy)
{
	T * a = new T[cpy._length];
	_array = a;
	this = cpy;
}

template <typename T>
Array<T>::~Array()
{
}

template <typename T>
unsigned int Array<T>::size()
{
	size_t i;
	for (i = 0; _array[i]; i++)
		;
	return i;
}

template <typename T>
const Array<T> & Array<T>::operator=(const Array & rhs)
{
	if (this == &rhs)
		return *this;
	this->_length = rhs._length;
	for (size_t i = 0; i < this->_length; i++)
		this->_array[i] = rhs._array[i];
	return *this;
}
