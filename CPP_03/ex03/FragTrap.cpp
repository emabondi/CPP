#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout<<"FragTrap constructor" << std::endl;
	this->_name = "Unknown";
	this->_hitPoints = _hp;
	this->_energyPoints = _ep;
	this->_attackDamage = _ad;
}

FragTrap::FragTrap(std::string name){
	std::cout<<"FragTrap constructor" << std::endl;
	this->_name = name;
	this->_hitPoints = _hp;
	this->_energyPoints = _ep;
	this->_attackDamage = _ad;
}

FragTrap& FragTrap::operator=(const FragTrap &f)
{
	this->_name = f.getName();
	return *this;
}

FragTrap::FragTrap(const FragTrap &d) : ClapTrap(d)
{
	std::cout<< "Copy constructor called" << std::endl;
	*this = d;
}

void	FragTrap::highFivesGuys(){
	std::cout<< "FragTrap "<< _name << " gives high five!\n"; 

}

FragTrap::~FragTrap(){
	std::cout<<"FragTrap destructor" << std::endl;
}