#include "Serialisation.hpp"

uintptr_t Serialize::serialize(Data *ptr)
{
    uintptr_t data_ptr;

    data_ptr = reinterpret_cast<uintptr_t>(ptr);
    return data_ptr;
}

Data *Serialize::deserialize(uintptr_t raw)
{
    Data *data;

    data = reinterpret_cast<Data*>(raw);
    return data;
}

Serialize::Serialize()
{
}

Serialize::Serialize(const Serialize &cpy)
{
    *this = cpy;
}

Serialize::~Serialize()
{
}

Serialize & Serialize::operator=(const Serialize &rhs)
{
    *this = rhs;
    return *this;
}
