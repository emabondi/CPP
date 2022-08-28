#include "Contact.hpp"
class Contact
{
	public:
		std::string name, last_name, nickname, phone_number, darkest_secret;
		void set_values(std::string, std::string, std::string, std::string, std::string);

};

void Contact::set_values (std::string a, std::string b, std::string c, std::string d, std::string e)
{
	name = a;
	last_name = b;
	nickname = c;
	phone_number = d;
	darkest_secret = e;
}