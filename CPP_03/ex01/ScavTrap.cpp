#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout<<"Bonjour" << std::endl;
	this->_name = "Unknown";
	this->_hitPoints = _hp;
	this->_energyPoints = _ep;
	this->_attackDamage = _ad;
}

ScavTrap::ScavTrap(std::string name){
	std::cout<<"Bonjour" << std::endl;
	this->_name = name;
	this->_hitPoints = _hp;
	this->_energyPoints = _ep;
	this->_attackDamage = _ad;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &f)
{
	this->_name = f.getName();
	return *this;
}

ScavTrap::ScavTrap(const ScavTrap &d) : ClapTrap(d)
{
	std::cout<< "Copy constructor called" << std::endl;
	*this = d;
}

void ScavTrap::attack(const std::string& target){
	std::cout<< "ScavTrap "<< _name << " attacks " << target << " dealing " << _attackDamage << " damage\n"; 
}

void	ScavTrap::guardGate(){
	std::cout<< "ScavTrap "<< _name << " is guarding the gate\n"; 
}

ScavTrap::~ScavTrap(){
	std::cout<<"Addios" << std::endl;
}