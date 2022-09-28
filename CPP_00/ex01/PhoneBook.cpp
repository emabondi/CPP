#include "PhoneBook.hpp"

PhoneBook::PhoneBook (void)
{
	last = 0;
	total = 0;
}

void PhoneBook::add_contact(std::string name, std::string last_name, std::string nickname, std::string phone_number, std::string secret)
{
	rubrica[last].set_values(name, last_name, nickname, phone_number, secret);
	last++;
	if (last == 8)
		last = 0;
	if (total < 8)
		total++;
}

void PhoneBook::out_preview(std::string str)
{
	int	len;

	len = str.length();
	if (len > 10){
			for (int j = 0; j < 9; j++)
				std::cout<< str[j];
			std::cout << ".|";
	}
	else
	{
		int	spaces;

		spaces = 10 - len;
		for (int x = 0; x < spaces; x++)
			std::cout << " ";
		std::cout << str << "|";
	}
			
}
void PhoneBook::search(void)
{
	int	i;

	i = -1;
	if (total != 0){
		while (++i < total)
		{
			std::cout << "|         " << (i + 1) << "|";
			out_preview(rubrica[i].name);
			out_preview(rubrica[i].last_name);
			out_preview(rubrica[i].nickname);
			std::cout<< std::endl;
		}
		std::cout<< "Insert index of the contact:";
		std::cin>> i;
		while (i < 1 || i > total){
			std::cout<<"Out of range retry:";
			std::cin>> i;
		}
		std::cout<< "Name:" << rubrica[i - 1].name << std::endl;
		std::cout<< "Last name:" << rubrica[i - 1].last_name << std::endl;
		std::cout<< "Nickame:" << rubrica[i - 1].nickname << std::endl;
		std::cout<< "Phone number:" << rubrica[i - 1].phone_number << std::endl;
		std::cout<< "Darkest secret:" << rubrica[i - 1].darkest_secret << std::endl;
	}
	else
		std::cout<< "No contact found" << std::endl;
}