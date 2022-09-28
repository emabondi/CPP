#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	public:
		std::string name, last_name, nickname, phone_number, darkest_secret;
		void set_values(std::string, std::string, std::string, std::string, std::string);

};

#endif