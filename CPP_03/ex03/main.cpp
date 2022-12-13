#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void ) {
ClapTrap b("Guido");
ScavTrap a;
FragTrap c("Ripa");
a.guardGate();
c.highFivesGuys();
a.attack("Piergiorgio");
b.attack("Nimedio");
c.attack("Bufalo");
a.takeDamage(3);
b.takeDamage(4);
c.takeDamage(2);
for (int i = 0; i<3; i++)
	c.beRepaired(1);
return 0;
}