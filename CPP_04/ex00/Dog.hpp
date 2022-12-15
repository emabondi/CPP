#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : virtual public Animal{
	public:
		Dog();
		Dog(std::string name);
		Dog(const Dog &Dog);
		Dog& operator = (const Dog& f);
		~Dog();
};

#endif