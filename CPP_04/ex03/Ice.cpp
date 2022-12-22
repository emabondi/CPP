#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "Default constructor for Ice called!\n";
}

Ice::Ice(const Ice &toCopy) : AMateria("ice") {
	std::cout << "Copy constructor called for Ice\n";
	*this = toCopy;
}

Ice& Ice::operator=(const Ice& f) {
	std::cout << "Assignation operator called for Ice\n";
	this->_type  = f._type;
	return (*this);
}

AMateria *Ice::clone(void) const{
	return new Ice(*this);
}

Ice::~Ice() {
	std::cout << "Default destructor called for Ice!\n";
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}