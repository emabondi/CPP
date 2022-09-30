#include "Weapon.hpp"

Weapon::Weapon(std::string name)
{
	_type = name;
}

const std::string &Weapon::getType(void){
	return(_type);
}

void Weapon::setType(std::string newType){
	_type = newType;
}
