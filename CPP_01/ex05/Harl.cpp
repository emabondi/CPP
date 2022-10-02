#include "Harl.hpp"

void Harl::complain( std::string level )
{
	if (level == "ERROR")
		level.push_back('r');
	this->call[1] = &Harl::debug;
	this->call[0] = &Harl::info;
	this->call[3] = &Harl::warning;
	this->call[2] = &Harl::error;
	int num = level.length() - 4;
	(this->*call[num])();
}

void	Harl::debug(void)
{
	std::cout<< "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout<< "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout<< "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout<< "[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
