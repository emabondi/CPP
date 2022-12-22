#ifndef ICE_HPP
#define ICE_HPP
#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : virtual public AMateria {
	public:
		Ice();
		Ice(const Ice &toCopy);
		Ice& operator=(const Ice& f);
		AMateria *clone(void) const;
		void use(ICharacter& target);
		~Ice();

};

#endif