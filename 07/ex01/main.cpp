#include "Iter.hpp"

int main ()
{
    std::string str = "Hey du"; 
    iter(str, str.length(), toupper);
    std::cout << str << std::endl;
    return 0;
}