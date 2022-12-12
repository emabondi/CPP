#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class ClapTrap;


class FragTrap : public ClapTrap{
	public:
		FragTrap();
		FragTrap(std::string const name);
		FragTrap& operator = (const FragTrap &f);
		FragTrap(const FragTrap &ScavTrap);
		~FragTrap();
		void highFivesGuys();
};

#endif