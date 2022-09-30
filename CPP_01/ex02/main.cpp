#include <string>
#include <iostream>
int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout<< "Addresses:" << std::endl << &str << std::endl << stringPTR << std::endl << &stringREF << std::endl;
	std::cout<< "Values:"     << std::endl << str  << std::endl << *stringPTR << std::endl << stringREF << std::endl;
}