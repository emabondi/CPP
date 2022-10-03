#include <string>
#include <iostream>
#include "Harl.hpp"

int check(char* limit)
{
	if (limit == NULL)
		return (-1);
	std::string str = limit;
	if (str == "DEBUG")
		return (0);
	else if (str == "INFO")
		return (1);
	else if (str == "WARNING")
		return (2);
	else if (str == "ERROR")
		return (3);
	else
		return (-1);
}

int main(int argc, char *argv[])
{
	int	limit = check(argv[1]);
	if (argc == 2 && limit != -1){
	Harl harl(limit);

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("ERROR");
	harl.complain("WARNING");
	harl.complain("INFO");
	harl.complain("DEBUG");
	}
	else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return (0);
}