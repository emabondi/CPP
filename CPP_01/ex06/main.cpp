#include <string>
#include <iostream>
#include "Harl.hpp"

int main(int argc, char *argv[])
{
	if (argc == 2){
	Harl harl(argv[1]);

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
}