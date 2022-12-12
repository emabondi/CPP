#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &claptrap);
		ClapTrap& operator = (const ClapTrap& f);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName(void) const;
		
		~ClapTrap();
	private:
		std::string _name;
		static const int	_hp = 10;
		static const int	_ep = 10;
		static const int	_ad = 0;
		int 				_hitPoints;
		int 				_energyPoints;
		int 				_attackDamage;
};

#endif