#include "BitcoinExchange.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout<< "Error: could not open file.\n";
		return 0;
	}
	std::ifstream file;
	file.open(argv[1], std::ios::in);
	std::map<std::string, double> map = getData();
	return 0;
}