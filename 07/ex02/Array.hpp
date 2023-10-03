#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
	private:
		T *_array;
		unsigned int _length;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array & cpy);
		~Array();

		unsigned int size();
		const Array & operator=(const Array & rhs);
		//const size_t & operator=(const size_t & rhs);
		T & operator[](const size_t rhs);

		const T & getArray() { return _array; };
		unsigned int getLength() { return _length; };

};

#endif
