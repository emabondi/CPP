#include "Weapon.hpp"

class HumanA{

public:
	HumanA(std::string name, Weapon &arma);

	void attack(void);
private:
	std::string _name;
	Weapon& _weapon;
};
