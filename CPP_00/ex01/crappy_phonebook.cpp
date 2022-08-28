#include <iostream>
#include <string>
#include "PhoneBook.cpp"

int main ()
{
	PhoneBook phone1;
	std::string	command, name, last_name, nickname, phone_number, secret;

	while (command != "EXIT")
	{
		std::cout<< "Enter a command (ADD, SEARCH or EXIT):";
		std::getline (std::cin, command);
		if (command == "ADD")
		{
			std::cout<< "Insert name:";
			std::cin>> name;
			std::cout<< "Insert last name:";
			std::cin>> last_name;
			std::cout<< "Insert nickname:";
			std::cin>> nickname;
			std::cout<< "Insert phone number:";
			std::cin>> phone_number;
			std::cout<< "Insert darkest secret:";
			std::cin>> secret;
			phone1.add_contact(name, last_name, nickname, phone_number, secret);
		}
		else if (command == "SEARCH")
			phone1.search();

	}
	return (0);
}