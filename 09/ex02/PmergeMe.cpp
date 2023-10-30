#include "PmergeMe.hpp"

int parse(int argc, char **argv)
{
	if (argc < 2)
		return std::cout << "Please enter one argument" << std::endl, 0;
	if (!argv[1][0])
		return std::cout << "Please enter one argument" << std::endl, 0;
	for (int i = 1; i < argc; ++i)
	{
		for (int n = 0; argv[i][n]; ++n)
			if (!isdigit(argv[i][n]))
				return std::cout << "Please enter only positive numbers" << std::endl, 0;
	}
	return 1;
}

int PmergeMe(int argc, char **argv)
{
	if (!parse(argc, argv))
		return 0;
	std::vector<int> arr;
	double	time1 = clock_gettime_nsec_np(CLOCK_REALTIME);
	SortVector(argc, argv);
	double	time2 = clock_gettime_nsec_np(CLOCK_REALTIME);
	SortList(argc, argv);
	double	time3 = clock_gettime_nsec_np(CLOCK_REALTIME);
	
	std::cout << "Before:	";
	for (int i = 1; i < argc; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl << "After:	";
	arr = SortVector(argc, argv);
	for (size_t i = 0; i < arr.size(); i++)
		std::cout << arr[i] << " ";
	std::cout << std::endl;
	std::cout << "Vector sorting:	" << std::setprecision(3) << (time2 - time1) / 1000000 << "ns" << std::endl;
	std::cout << "List sorting:	" << std::setprecision(3) << (time3 - time2) / 1000000 << "ns" << std::endl;
	return 1;
}