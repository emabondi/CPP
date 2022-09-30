#include "Weapon.hpp"

class HumanB{

public:
	HumanB(std::string name);

	void attack(void);
	void setWeapon(Weapon &weapon);

private:
	Weapon* _weapon;
	std::string _name;
};