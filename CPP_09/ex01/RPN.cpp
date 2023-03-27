#include "RPN.hpp"
int	add_number(std::string &str, std::string::size_type &i){
	int	j = i;

	while (str[i] >= '0' && str[i] <= '9')
		i++;
	return (atoi(str.substr(j, i - j).c_str()));
}

void	do_operation(std::stack<int> &stack, char c){
	if (stack.size() < 2){
		std::cout<< "Error: not enough elements for executing operation " << c << std::endl;
		exit(0);}
	int	num2 = stack.top();
	stack.pop();
	int	num1 = stack.top();
	stack.pop();

	switch(c){
		case '+':
			num2 = num1 + num2;
			break ;
		case '-':
			num2 = num1 - num2;
			break ;
		case '*':
			num2 = num1 * num2;
			break ;
		case '/':
			num2 = num1 / num2;
			break ;
	}
	stack.push(num2);
}

void	execute_rpn(std::string &str){
	std::stack<int> stack;

	for (std::string::size_type i = 0; i < str.size(); i++) {
		if (str[i] == ' ')
			continue ;
		else if (str[i] >= '0' && str[i] <= '9')
			stack.push(add_number(str, i));
		else if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
			do_operation(stack, str[i]);
		else{
			std::cout << "Error\n";
			return ;}
	}
	std::cout << stack.top() << std::endl;
}