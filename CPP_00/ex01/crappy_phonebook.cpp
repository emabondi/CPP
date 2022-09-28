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

			std::cin.ignore();
			while (name == ""){
				std::cout<< "Insert name:";
				std::getline (std::cin, name);
			}
			while (last_name == ""){
				std::cout<< "Insert last name:";
				std::getline (std::cin, last_name);
			}
			while (nickname == ""){
				std::cout<< "Insert nickname:";
				std::getline (std::cin, nickname);
			}
			while (phone_number == ""){
				std::cout<< "Insert phone number:";
				std::getline (std::cin, phone_number);
			}
			while (secret == ""){
				std::cout<< "Insert darkest secret:";
				std::getline (std::cin, secret);
			}
			phone1.add_contact(name, last_name, nickname, phone_number, secret);
			name.clear();
			last_name.clear();
			nickname.clear();
			phone_number.clear();
			secret.clear();
		}
		else if (command == "SEARCH")
			phone1.search();

	}
	return (0);
}