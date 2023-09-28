#ifndef Serialisation_HPP
#define Serialisation_HPP

#include <iostream>
#include <stdint.h>

struct Data
{
	int i;
};

class Serialize
{
	private:
		Serialize();
		Serialize(const Serialize & cpy);
		~Serialize();
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t raw);

		Serialize & operator=(const Serialize & rhs);

};

#endif
