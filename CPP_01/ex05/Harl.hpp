#ifndef HARL_HPP
#define HARL_HPP
#include <iostream>
#include <string>

class Harl {
public:
		void	complain( std::string level );
		void	(Harl::*call[4])();
		//void	(Harl::*i)();
		//void	(Harl::*w)();
		//void	(Harl::*e)();
private:
		void	debug (void);
		void	info (void);
		void	warning (void);
		void	error (void);
};

#endif