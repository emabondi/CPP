#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook
{
	public:
		Contact rubrica[8];
		int	last;
		int	total;
		void	add_contact(std::string, std::string, std::string, std::string, std::string);
		void	search(void);
		void	out_preview(std::string);
		PhoneBook (void);
};

#endif