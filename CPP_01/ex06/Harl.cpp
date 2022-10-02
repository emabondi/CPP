#include "Harl.hpp"

int Harl::check(std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			if (i >= _limit)
				return (i + 1);
	return (-1);
}

void Harl::complain( std::string level)
{
	this->call[0] = &Harl::debug;
	this->call[1] = &Harl::info;
	this->call[2] = &Harl::warning;
	this->call[3] = &Harl::error;
	switch (check(level)){
		case 1:
			(this->*call[0])();
			break ;
		case 2:
			(this->*call[1])();
			break ;
		case 3:
			(this->*call[2])();
			break ;
		case 4:
			(this->*call[3])();
			break ;
	}

}

Harl::Harl(char* limit)
{
	std::string str = limit;
	if (str == "DEBUG")
		_limit = 0;
	else if (str == "INFO")
		_limit = 1;
	else if (str == "WARNING")
		_limit = 2;
	else if (str == "ERROR")
		_limit = 3;
	else
		_limit = 4;
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
