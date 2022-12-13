#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main( void ) {
DiamondTrap a("Ripa");
//DiamondTrap a;
a.attack("Piergiorgio");
a.guardGate();
a.highFivesGuys();
a.whoAmI();
a.takeDamage(10);
a.beRepaired(3);
return 0;
}