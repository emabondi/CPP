#include <iostream>
#include <stdlib.h>

void toChar(double converted){
	char c = static_cast<char>(converted);
	if (c != converted)
		std::cout << "char: impossible\n";
	else if (c < 32 /*|| c > 127*/)
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: '" << c << "'\n";
}

void toInt(double converted){
	int i = static_cast<int>(converted);
	if (i != converted || converted < -2147483648 || converted > 2147483647)
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << converted << std::endl;
}

void toFloat(double converted){
	converted = static_cast<float>(converted);
	std::cout << "float: " << converted << "f\n";
}

void convert(char *str){
	double converted = atof(str);

	toChar(converted);
	toInt(converted);
	std::cout.precision(1);
	std::cout << std::fixed;
	toFloat(converted);
	std::cout << "double: " << converted << std::endl;
}

int	main(int argc, char *argv[]){
	if (argc == 2)
		convert(argv[1]);
	else
		std::cout << "Expected one argument!\n";
	return (0);
}