#include "PmergeMe.hpp"
void	addPair(std::list< std::list<int> > & pairs, char *s1, char *s2)
{
	std::list<int> pair;
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

int createPairArray(std::list< std::list <int> > & pairs, int argc, char **argv)
{
	int n = 0;
	for (int i = 1; i + 1 < argc ; i += 2)
	{
		addPair(pairs, argv[i], argv[i + 1]);
		n++;
	}
	return 0;
}

void	sortPairArray(std::list< std::list<int> > & pairs)
{
	pairs.sort();
}

void	sortHighest(std::list<int> & arr, std::list< std::list<int> > pairs, int argc, char **argv)
{
	for (std::list < std::list <int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
		arr.push_back((*it).front());
	if (argc % 2 == 0)
	{
		std::stringstream ss(argv[argc - 1]);
		int num;
		ss >> num;
		std::list < int >::iterator end = arr.begin();
		while (end != arr.end())
			++end;
		std::list < int >::iterator it = arr.begin(); 
		while (it != arr.end())
		{
			if (num < *it)
			{
				arr.insert(it, num);
				break;
			}
			++it;
			if (it == arr.end())
				arr.insert(it, num);
		}
	}
}

void	sortLowest(std::list<int> & arr, std::list< std::list<int> > pairs)
{
	std::vector<int> jac = JacOrder(pairs.size());
	arr.insert(arr.begin(), (*pairs.begin()).back());
	for (size_t i = 1; i < pairs.size(); i++)
	{
		std::list < std::list <int> >::iterator itr = pairs.begin();
		for (int n = 0; n < jac[i]; n++)
			++itr;
		int num = (*itr).back();
		for (std::list <int>::iterator it = arr.begin(); it != arr.end(); ++it)
		{
			if (num <= *it)
			{
				arr.insert(it, num);
				break;
			}
		}
		
	}
}

int SortList(int argc, char **argv)
{
	std::list< std::list <int> > pairs;
	std::list<int> arr;

	if (argc <= 1)
		return 0;
	createPairArray(pairs, argc, argv);
	sortPairArray(pairs);

	// for (std::list < std::list <int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
	// { std::cout << (*it).front() << ", " << (*it).back() << std::endl; }
	// std::cout << "-------------------" << std::endl;

	sortHighest(arr, pairs, argc, argv);
	// for (std::list < int >::iterator it = arr.begin(); it != arr.end(); ++it)
	// 	std::cout << *it << std::endl;
	// std::cout << "-------------------" << std::endl;
	sortLowest(arr, pairs);
	std::cout << "-------------------" << std::endl;
	for (std::list < int >::iterator it = arr.begin(); it != arr.end(); ++it)
		std::cout << *it << std::endl;
	return 0;
}





















	//std::list < std::list <int> >::iterator it2 = pairs.begin();
	// for (std::list < std::list <int> >::iterator it = pairs.begin(); it != pairs.end(); it++)
	// {
	//     it2 = it;
	//    if (it != pairs.begin() && (*it).front() << (*it2++).front())
	//    {
	//     it.swap(it2);
	//    }
	// }