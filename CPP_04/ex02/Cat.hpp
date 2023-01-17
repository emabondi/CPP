#ifndef CAT_HPP
#define CAT_HPP
#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : virtual public Animal {
	public:
		Cat();
		Cat(const Cat &Cat);
		Cat& operator = (const Cat& f);
		void makeSound() const;
		Brain* getBrain() const;
		void copyBrain(Brain* toCopy);
		virtual ~Cat();
	
	private:
		Brain* _br;
};

#endif