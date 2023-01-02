#include "Easyfind.hpp"
#include <list>
#include <vector>

int main( void ) {
	std::list<int>		arr;
	std::vector<int>	arr2;

	for (int i = 0; i < 10; i++){
		if (i == 5){
			arr.push_back(1);
			arr2.push_back(1);
			continue;
		}
		arr.push_back(2);
		arr2.push_back(2);
	}
	try
	{
		std::cout << *(::easyfind(arr, 1)) << std::endl;
		std::cout << *(::easyfind(arr, 2)) << std::endl;
		std::cout << *(::easyfind(arr, -1)) << std::endl;
	}
	catch (NotFound& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << *(::easyfind(arr2, 1)) << std::endl;
		std::cout << *(::easyfind(arr2, 2)) << std::endl;
		std::cout << *(::easyfind(arr2, -1)) << std::endl;
	}
	catch (NotFound& e)
	{
		std::cout << e.what() << std::endl;
	}

	return (0);
}