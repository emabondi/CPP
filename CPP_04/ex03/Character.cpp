#include "Character.hpp"

Character::Character(void) : _name("Default"){
	for (int i=0; i < 4; i++)
		this->_inventory[i] = 0;
	for (int j=0; j < 50; j++)
		this->_onfloor[j] = 0;
	std::cout << "Default constructor for Character called!\n";
}

Character::Character(std::string name) : _name(name){
	std::cout << "Name constructor for Character called!\n";
}

Character::Character(Character & toCopy){
	std::cout << "Copy constructor called for Character!\n";
	*this = toCopy;
}

Character &Character::operator=(const Character &f){
	std::cout << "Copy assignment operator called for Character!\n";
	this->_name = f._name;
	return *this;
}

Character::~Character(void){
	std::cout << "Destructor called for Character!\n";
}

std::string const & Character::getName(void) const{
	return (this->_name);
}

void Character::equip(AMateria *m){
		if (!m)
	{
		std::cout << "Materia doesn't exist!\n";
		return ;
	}
	// check if it is possible to equip
	for (int i=0; i < 4; i++)
	{
		if (!this->_inventory[i])
		{
			std::cout << "Inventory equiped with " << m->getType() << "!\n";
			this->_inventory[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Invaild index!\n";
		return ;
	}
	if (this->_inventory[idx] == NULL)
	{
		std::cout << "Inventory at given index is already empty\n";
		return ;
	}
	for (int j=0; j < 50; j++)
	{
		if (this->_onfloor[j] == 0)
		{
			this->_onfloor[j] = this->_inventory[idx];
			this->_inventory[idx] = 0;
			std::cout << "Item succesfully unequiped!\n";
			return ;
		}
	}
	std::cout << "You can't unequip the item: the floor is full of weapons!\n";
	return ;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Invaild index!\n";
		return ;
	}
	if (this->_inventory[idx] == NULL)
	{
		std::cout << "Inventory at given index is empty\n";
		return ;
	}
	this->_inventory[idx]->use(target);
	delete this->_inventory[idx];
  	this->_inventory[idx] = NULL;
}