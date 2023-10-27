#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <sstream>
#include <ctime>
#include <iostream>
#include <iomanip>

//Jacobsthal
int	                Jacobsthal(int i);
std::vector<int>    JacOrder(int nPairs);

std::vector<int>	SortVector(int argc, char **argv);
std::list<int>		SortList(int argc, char **argv);


#endif