#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "Default constructor for Cure called!\n";
}

Cure::Cure(const Cure &toCopy) : AMateria("cure") {
	std::cout << "Copy constructor called for Cure\n";
	*this = toCopy;
}

Cure& Cure::operator=(const Cure& f) {
	std::cout << "Assignation operator called for Cure\n";
	this->_type  = f._type;
	return (*this);
}

AMateria *Cure::clone(void) const{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *\n";
}

Cure::~Cure() {
	std::cout << "Default destructor called for Cure!\n";
}