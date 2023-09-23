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
    public:
        uintptr_t   serialize(Data* ptr);
        Data*       deserialize(uintptr_t raw);

        Serialize();
        Serialize(const Serialize & cpy);
        ~Serialize();

        Serialize & operator=(const Serialize & rhs);
};

#endif
