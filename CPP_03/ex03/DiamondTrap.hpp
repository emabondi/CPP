#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class ClapTrap;


class DiamondTrap : public ScavTrap, public FragTrap{
	public:
		DiamondTrap();
		DiamondTrap(std::string const name);
		DiamondTrap& operator = (const DiamondTrap &f);
		DiamondTrap(const FragTrap &ClapTrap);
		void attack(const std::string& target);
		void whoAmI();
		~DiamondTrap();

	private:
		std::string	name;
};

#endif