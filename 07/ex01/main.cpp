#include "Iter.hpp"

int main ()
{
	std::string str[] = {"Hi", "du"};
	//char str1[]= "hallo";
	//int str2[] = {0, 5, 3, 8};
	::iter(str, 2, print_out);
	return 0;
}