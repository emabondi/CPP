#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ClapTrap;


class ScavTrap : public ClapTrap{
	public:
		ScavTrap();
		ScavTrap(std::string const name);
		ScavTrap& operator = (const ScavTrap &f);
		ScavTrap(const ScavTrap &ScavTrap);
		~ScavTrap();
		void attack(const std::string& target);
		void guardGate();
};

#endif