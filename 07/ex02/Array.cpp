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

template <class T>
Array<T>::Array(const Array & cpy)
{
	_array = cpy;
}

template <class T>
Array<T>::~Array()
{
	//delete _array[_length];
	//delete *this;
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
const T & Array<T>::getArray(){ return _array; }