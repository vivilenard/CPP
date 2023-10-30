#include "PmergeMe.hpp"

int	Jacobsthal(int i)
{
	if (i == 0)
		return 0;
	if (i == 1)
		return 1;
	return Jacobsthal(i - 1) + 2 * Jacobsthal(i - 2);
}

std::vector<int> JacOrder(int nPairs)
{
	std::vector<int> j;
	j.push_back(0);
	j.push_back(1);
	for (size_t i = 3; j.size() < (size_t) nPairs; ++i)
	{
		int num = Jacobsthal(i);
		if (num < nPairs)
			j.push_back(num);
		while (--num > Jacobsthal(i - 1))
		{
			if (num < nPairs)
				j.push_back(num);
		}
	}
	return j;
}