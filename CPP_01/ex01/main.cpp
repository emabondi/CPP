#include "Zombie.hpp"

int main ( void ){

	int N = 10;
	Zombie* zomb;
	zomb = zombieHorde(N, "pippo");
	for (int i = 0; i < N; i++){
		zomb[i].announce();
	}
	delete[] zomb;
	return(0);
}
