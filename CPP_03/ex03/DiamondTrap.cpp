#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap(){
	std::cout<<"DiamondTrap constructor" << std::endl;
	this->_name = "Unknown";
	this->_hitPoints = _hitPoints;
	this->_energyPoints = _energyPoints;
	this->_attackDamage = _attackDamage;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(), ScavTrap(), FragTrap(){
	std::cout<<"DiamondTrap constructor" << std::endl;
	this->name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &f)
{
	this->_name = f.getName();
	return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap &d) : ClapTrap(d)
{
	std::cout<< "Copy constructor called" << std::endl;
	*this = d;
}

DiamondTrap::~DiamondTrap(){
	std::cout<<"DiamondTrap destructor" << std::endl;
}
