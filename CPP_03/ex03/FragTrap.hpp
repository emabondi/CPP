#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class ClapTrap;


class FragTrap : virtual public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string const name);
		FragTrap& operator = (const FragTrap &f);
		FragTrap(const FragTrap &ClapTrap);
		~FragTrap();
		void highFivesGuys();
};

#endif