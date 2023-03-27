#include "RPN.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2){
		std::cout << "Error\n";
		return 1;}
	std::string str(argv[1]);
	//std::cout << "ciao\n" << str << std::endl ;
	execute_rpn(str);
	return 0;
}