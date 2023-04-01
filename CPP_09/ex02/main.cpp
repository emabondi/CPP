#include "PmergeMe.hpp"

int	ft_error(std::string str)
{
	std::cout << "Error\n" << str << std::endl;
	return (1);
}

int	main(int argc, char *argv[])
{
	if (argc <= 2){
		return (ft_error("Not enough arguments"));}
	argv++;
	std::vector<int> vec;
	std::deque<int> deq;
	int	size = argc - 1;

	for (int i = 0; i < size; i++)
	{
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
	//for (int i = 0; i < size ; i++)
		//std::cout << vec[i] << " ";
	//std::cout<<"\nvecsize:" << vec.size() << "    /2:" << size / 2;
	vec = merge_insert_sort(vec);
	std::cout << "\nAfter: ";
	for (std::vector<int>::iterator l = vec.begin(); l != vec.end(); l++){
			std::cout << *l << " ";
		}
	return 0;
}