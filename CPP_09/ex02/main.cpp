#include "PmergeMe.hpp"
long long	get_time(void)
{
	struct timeval	timeval;

	gettimeofday(&timeval, NULL);
	return ((timeval.tv_sec) + (timeval.tv_usec));
}

int	ft_error(std::string str)
{
	std::cout << "Error\n" << str << std::endl;
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc <= 2){
		return (ft_error("Not enough arguments"));}
	std::vector<int> vec;
	std::deque<int> deq;

	for (int i = 1; i < argc; i++){
		int	x = atoi(argv[i]);
		if (x <= 0)
			return (ft_error("Wrong argument"));
		vec.push_back(x);
		deq.push_back(x);
	}

	std::cout << "Before: ";
	for (std::vector<int>::iterator l = vec.begin(); l != vec.end(); l++){
			std::cout << *l << " ";
		}
	int	start = get_time();
	vec = merge_insert_sort(vec);
	int	end = get_time();
	std::cout << "\nAfter: ";
	for (std::vector<int>::iterator l = vec.begin(); l != vec.end(); l++){
			std::cout << *l << " ";
		}
	std::cout << "\nTime to process a range of " << argc - 1 <<  " elements with std::vector : " << end - start << " us" << std::endl;
	start = get_time();
	deq = merge_insert_sort(deq);
	end = get_time();
	std::cout << "Time to process a range of " << argc - 1 <<  " elements with std::deque : " << end - start << " us" << std::endl;
	return 0;
}