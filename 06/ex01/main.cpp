#include "Serialisation.hpp"

int main()
{
    Data data;
    Serialize serializer;
    uintptr_t ptr;

    data.i = 9;
    ptr = serializer.serialize(&data);
    data = *serializer.deserialize(ptr);

    std::cout << data.i << std::endl;
    return 0;
}