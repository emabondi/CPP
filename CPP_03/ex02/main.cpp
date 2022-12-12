#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {
ScavTrap a;
ScavTrap b("Guido");
ScavTrap c( b );
ClapTrap d;
b.guardGate();
c.guardGate();
a.attack("Piergiorgio");
d.attack("Nimedio");
c.attack("Bufalo");
a.takeDamage(3);
d.takeDamage(4);
c.takeDamage(2);
for (int i = 0; i<3; i++)
	c.beRepaired(1);
//a.takeDamage(10);
//a.takeDamage(2);
return 0;
}