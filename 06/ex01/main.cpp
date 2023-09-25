#include "Serialisation.hpp"

int main()
{
    Data data;
    uintptr_t ptr;

    data.i = 9;
    ptr = Serialize::serialize(&data);
    data = *Serialize::deserialize(ptr);

    std::cout << data.i << std::endl;
    return 0;
}