#include "BitcoinExchange.hpp"

bool	check_value(std::string value){
	char	*endptr;
	long	num = strtol(value.c_str(), &endptr, 10);
	if (num > 2147483647){
		std::cout << "Error: too large number.\n";
		return 0;}
	else if (num < 0){
		std::cout << "Error: not a positive number.\n";
		return 0;}
	return 1;
}

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
		std::string	svalue;
		float		value;
		float		result;

		if ((pos = line.find('|')) == -1){
			std::cout << "Error: bad input => " << line << std::endl;
			continue ;
		}
		date = line.substr(0, pos - 1);
		svalue = line.substr(pos + 2);
		//check date
		if(!check_value(svalue))
			continue ;
		value = atof(svalue.c_str());
		if (map.count(date))
			result = map[date];
		else{
		std::map<std::string, float>::iterator i = map.upper_bound(date);
		i--;
		result = map[i->first];
		}
		result *= value;
		std::cout << date << " => " << value << " = " << result << std::endl;
	}
}
