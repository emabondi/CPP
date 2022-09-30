#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &arma): _weapon(arma)/*, _name(name)*/
{
	this->_name = name;
}

void HumanA::attack(void)
{
	std::cout<< _name << " attacks with their " << _weapon.getType() << std::endl;
}
