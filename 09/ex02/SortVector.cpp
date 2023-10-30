#include "PmergeMe.hpp"

void	addPair(std::vector< std::vector<int> > & pairs, char *s1, char *s2)
{
	std::vector<int> pair;
	int i1;
	int i2;
	std::stringstream ss(s1);
	std::stringstream sss(s2);
	ss >> i1;
	sss >> i2;
	if (i1 > i2)
	{
		pair.push_back(i1);
		pair.push_back(i2);
	}
	else
	{
		pair.push_back(i2);
		pair.push_back(i1);
	}
	pairs.push_back(pair);
}

//Merge
void	createPairArray(std::vector< std::vector<int> > & pairs, int argc, char **argv)
{
	int n = 0;
	for (int i = 1; i + 1 < argc ; i += 2)
	{
		addPair(pairs, argv[i], argv[i + 1]);
		n++;
	}
}

void	sortPairArray(std::vector< std::vector<int> > & pairs)
{
	int flag = 1;
	while (flag == 1)
	{
		flag = 0;
		for (size_t i = 0; i < pairs.size(); i++)
		{
			if (i > 0 && pairs[i][0] < pairs[i - 1][0])
			{
				std::swap(pairs[i], pairs[i - 1]);
				flag = 1;
			}
		}
	}
}

void	sortHighest(std::vector<int> & arr, std::vector< std::vector<int> > pairs, int argc, char **argv)
{
	for (size_t i = 0; i < pairs.size(); i++)
		arr.push_back(pairs[i][0]);
	if (argc % 2 == 0)
	{
		std::stringstream ss(argv[argc - 1]);
		int num;
		ss >> num;
		for (size_t i = 0; i < arr.size(); i++)
		{
			if (num < arr[i])
			{
				arr.insert(arr.begin() + i, num);
				break;
			}
			if (i + 1 == arr.size())
			{
				arr.insert(arr.end(), num);
				break;
			}
		}
		if (argc == 2)
			arr.push_back(num);
	}
}

//Insert
void	sortLowest(std::vector<int> & arr, std::vector< std::vector<int> > pairs)
{
	std::vector<int> jac = JacOrder(pairs.size());
	for (size_t i = 0; i < pairs.size(); i++)
	{
		size_t c = 0;
		while(c < arr.size() && pairs[jac[i]][1] > arr[c])	c++;
		arr.insert(arr.begin() + c, pairs[jac[i]][1]);
	}
}

std::vector<int>	SortVector(int argc, char **argv)
{
	std::vector< std::vector<int> > pairs;
	std::vector<int> arr;

	if (argc <= 1)
		return arr;
	arr.reserve(argc - 1);
	createPairArray(pairs, argc, argv);
	sortPairArray(pairs);
	sortHighest(arr, pairs, argc, argv);
	sortLowest(arr, pairs);
	return arr;
}