#include "Zombie.hpp"

int main ( void ){
	Zombie zombie1( "Foo" );
	zombie1.announce();

	Zombie* zombie2;
	zombie2 = newZombie( "Albert" );
	zombie2->announce();

	/*Zombie* zombie3;*/
	/*zombie3 = */randomChump( "Piergiorgio" );
}
