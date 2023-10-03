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

		const Array & operator=(const Array & rhs);

		const T & getArray();
		unsigned int getLength() { return _length; };

};

#endif
