#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Unknown"), _hitPoints(_hp), _energyPoints(_ep), _attackDamage(_ad)
{
	std::cout<< "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name)  : _name(name), _hitPoints(_hp), _energyPoints(_ep), _attackDamage(_ad)
{
	std::cout<< "Default constructor called" << std::endl;
	_name = name;
	//_hitPoints = 10;
	//_energyPoints = 10;
	//_attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap)
{
	std::cout<< "Copy constructor called" << std::endl;
	*this = ClapTrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& f)
{
	std::cout<< "Copy assignment operator called" << std::endl;
	_name = f.getName();
	return (*this);
}

void ClapTrap::attack(const std::string& target){
	if (_energyPoints > 0){
		std::cout<< "ClapTrap " << _name << " attacks " << target << " causing " \
			<< _attackDamage << " points of damage! " << std::endl;

		_energyPoints--;
	}
	else
		std::cout<< "ClapTrap " << _name << " has finished the energy points."<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (_hitPoints > 0){
		_hitPoints -= amount;
		std::cout<< "ClapTrap " << _name << " has lost " << amount \
			<< " hit points. Hit points:" << _hitPoints << std::endl;
		
	}
	else
		std::cout<< "ClapTrap " << _name << " is already dead."<< std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (_energyPoints > 0){
		_hitPoints += amount;
		std::cout<< "ClapTrap " << _name << " repairs itself, it gets " << amount \
			<< " hit points back. Hit points:" << _hitPoints << std::endl;
		
		_energyPoints--;
	}
	else
		std::cout<< "ClapTrap " << _name << " has finished the energy points."<< std::endl;
}

std::string ClapTrap::getName(void) const {
	return (_name);
}

ClapTrap::~ClapTrap()
{
	std::cout<< "Destructor called" << std::endl;
}