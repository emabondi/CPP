#include "BitcoinExchange.hpp"

std::map<std::string, float>	getData()
{
	std::map<std::string, float> _data;
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
		_data[date] = atof(rate.c_str());
	}
	return _data;
}

void	check_exchange(char *f, std::map<std::string, float> map)
{
	std::ifstream file(f);
	std::string line;
	std::getline(file, line);
	int pos;
	while(std::getline(file, line))
	{
		std::string date;
		float		value;
		float		result;
		pos = line.find('|');
		date = line.substr(0, pos - 1);
		value = atof(line.substr(pos + 2).c_str());
		//check date
		//check value
		//if (map.count(date))
			result = map[date];
		//else{
		std::map<std::string, float>::iterator i = map.upper_bound(date);
		i--;
		result = map[i->first];
		//}
		std::cout <<"prova:" << result << " val" << value << std::endl;
	}
}
