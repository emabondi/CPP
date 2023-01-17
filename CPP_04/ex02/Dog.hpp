#ifndef DOG_HPP
#define DOG_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : virtual public Animal{
	public:
		Dog();
		Dog(const Dog &toCopy);
		Dog& operator = (const Dog& f);
		void makeSound() const;
		Brain* getBrain() const;
		void copyBrain(Brain* toCopy);
		virtual ~Dog();

	private:
		Brain* _br;
};

#endif