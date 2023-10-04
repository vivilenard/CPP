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

		Array & operator=(const Array & rhs);
		T & operator[](const unsigned int rhs) const;

		unsigned int size() { return _length; };

		class IndexTooHighException: public std::exception
		{
			public:
				const char *what() const throw(){ return "Index too high! ";};
		};
};

#endif
