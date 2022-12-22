#ifndef CURE_HPP
#define CURE_HPP
#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : virtual public AMateria {
	public:
		Cure();
		Cure(const Cure &toCopy);
		Cure& operator=(const Cure& f);
		AMateria *clone(void) const;
		void use(ICharacter& target);
		~Cure();

};

#endif