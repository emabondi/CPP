#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{

public:
	Character(void);
	Character(std::string name);
	Character(Character & rhs);
	Character &operator=(const Character &rhs);
	~Character(void);

	virtual void equip(AMateria *m);
	// virtual void equip_from_floor(int idx);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter &target);
	virtual std::string const & getName() const;

private:
	std::string _name;
	AMateria *_inventory[4];
	AMateria *_onfloor[50];
};

#endif