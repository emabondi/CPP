#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout<<"Bonjour" << std::endl;
	this->_name = "Pippo";
	this->_hitPoints = _hp;
	this->_energyPoints = _ep;
	this->_attackDamage = _ad;
}

ScavTrap& ScavTrap::operator=(const ClapTrap &f){
	_name = 
}

ScavTrap::guardGate(){

}

ScavTrap::~ScavTrap(){
	std::cout<<"Addios" << std::endl;
}