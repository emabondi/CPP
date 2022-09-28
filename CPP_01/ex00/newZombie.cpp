#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
	static Zombie zombie1( name );
	return (&zombie1);
}