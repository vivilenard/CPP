#include "Array.hpp"

template <typename T>
Array<T>::Array(): _length(0)
{
	_array = new T[_length];
}

template <typename T>
Array<T>::Array(unsigned int n): _length(n)
{
	_array = new T[n];
}

template <typename T>
Array<T>::Array(const Array & cpy): _length(cpy._length)
{
	_array = new T[_length];
	for (size_t i = 0; i < this->_length; i++)
		this->_array[i] = cpy._array[i];
}

template <typename T>
Array<T>::~Array()
{
	delete [] this->_array;
}

template <typename T>
Array<T> & Array<T>::operator=(const Array<T> & rhs)
{
	if (PRINT)
		std::cout << "Assignment operator called" << std::endl;
	delete [] _array;
	this->_length = rhs._length;
	this->_array = new T[rhs._length];
	for (size_t i = 0; i < this->_length; i++)
		this->_array[i] = rhs._array[i];
	return *this;
}

template <typename T>
T & Array<T>::operator[](const unsigned int rhs) const
{
	if (PRINT)
		std::cout << "Subscript operator called" << std::endl;
	if (rhs >= _length)
		throw (IndexTooHighException());
	return this->_array[rhs];
}
