#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Dog Fido;
	Cat Milu;
	Fido.makeSound();
	Milu.makeSound();
	//Animal sasquatch; don't wake him or he will be mad
	return 0;
}
