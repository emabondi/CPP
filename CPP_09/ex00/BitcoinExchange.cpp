#include "BitcoinExchange.hpp"

std::map<std::string, double>	getData()
{
	std::map<std::string, double> _data;
	std::ifstream file("data.csv");
	std::string line;
	std::getline(file, line);
	int pos;
	while(std::getline(file, line))
	{
		std::string date, rate;
		pos = line.find(',');
		date = line.substr(0, pos);
		rate = line.substr(pos + 1);
		std::cout << "First string: " << date << std::endl;
        std::cout << "Second string: " << rate << std::endl;
		_data[date] = atof(rate.c_str());
	}
	return _data;
}
