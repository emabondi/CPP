#include "Zombie.hpp"

/*Zombie**/void randomChump( std::string name )
{
	/*static*/ Zombie zombie1( name );
	zombie1.announce();
	return /*(&zombie1)*/;
}
