#include "RPN.hpp"

void	do_operation(std::stack<int> &stack, char c){
	if (stack.size() < 2){
		std::cout<< "Error: not enough elements for executing operation " << c << std::endl;
		exit(0);}
}

void	execute_rpn(std::string str){
	std::stack<int> stack;
	//std::string::size_type pos = 0;

	for (std::string::size_type i = 0; i < str.size(); i++) {
		if (str[i] == ' ')
			continue ;
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
			do_operation(stack, str[i]);
	}
}