#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	std::cout<<"DiamondTrap constructor" << std::endl;
	this->_name = "Unknown";
	this->_hitPoints = _hitPoints;
	this->_energyPoints = _energyPoints;
	this->_attackDamage = _attackDamage;
	ClapTrap::_name = this->_name + "_clap_name";
}

DiamondTrap::DiamondTrap(std::string name){
	std::cout<<"DiamondTrap constructor" << std::endl;
	this->name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	ClapTrap::_name = this->name + "_clap_name";
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap &f)
{
	this->_name = f.getName();
	return *this;
}

DiamondTrap::DiamondTrap(const DiamondTrap &d) : ClapTrap(d) , ScavTrap(d) , FragTrap(d) 
{
	std::cout<< "Copy constructor called" << std::endl;
	*this = d;
}

void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void DiamondTrap::guardGate(){
	ScavTrap::guardGate();
}

void DiamondTrap::highFivesGuys(){
	FragTrap::highFivesGuys();
}

void	DiamondTrap::whoAmI(){
	std::cout<< "My name is: ";
	if ( !this->name.empty())
		std::cout<< this->name;
	else
		std::cout<< this->_name;
	std::cout<< ", ClapTrap name is:" << ClapTrap::_name << std::endl;
}

DiamondTrap::~DiamondTrap(){
	std::cout<<"DiamondTrap destructor" << std::endl;
}
