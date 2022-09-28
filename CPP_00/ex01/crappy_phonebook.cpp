#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main ()
{
	PhoneBook phone1;
	std::string	command, name, last_name, nickname, phone_number, secret;

	while (command != "EXIT")
	{
		std::cout<< "Enter a command (ADD, SEARCH or EXIT):";
		/*std::getline (std::cin, command);*/std::cin>> command;
		if (command == "ADD")
		{
			std::cout<< "Insert name:";
			while (name == "")
				std::getline (std::cin, name);
			std::cout<< "Insert last name:";
			while (last_name == "")
				std::getline (std::cin, last_name);
			std::cout<< "Insert nickname:";
			while (nickname == "")
				std::getline (std::cin, nickname);
			std::cout<< "Insert phone number:";
			while (phone_number == "")
				std::getline (std::cin, phone_number);
			std::cout<< "Insert darkest secret:";
			while (secret == "")
				std::getline (std::cin, secret);
			phone1.add_contact(name, last_name, nickname, phone_number, secret);
		}
		else if (command == "SEARCH")
			phone1.search();

	}
	return (0);
}