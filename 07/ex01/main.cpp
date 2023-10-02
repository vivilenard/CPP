#include "Iter.hpp"

void	convert(std::string & array, size_t length)
{
	for (size_t i = 0; i < length; i++)
	{
		array[i] = std::toupper(array[i]);
	}
}

int main ()
{
	std::string str = "Hey du!"; 
	iter(str, str.length(), convert);
	std::cout << str << std::endl;
	return 0;
}