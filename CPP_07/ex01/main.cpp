#include "Iter.hpp"
template <typename T> void print(T const &t){
	std::cout << "Value: "<< t << std::endl;
}

int main( void ) {
	int const	arr[10] = {
		10, 9, 8, 7, 6, 5, 4, 3, 2, 1
	};
	std::string const	arr2[10] = {
		"dieci", "nove", "otto", "sette", "sei",
		"cinque", "quattro", "tre", "due", "uno"
	};
	iter(arr, 10, print);
	std::cout << "First attempt finished" << std::endl;
	iter(arr2, 10, print);
	std::cout << "Second attempt finished" << std::endl;
	return (0);
}