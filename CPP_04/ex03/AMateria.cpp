#include "AMateria.hpp"

AMateria::AMateria() : _type("Unknown"){
	std::cout << "Default constructor called for AMateria!\n";
}

AMateria::AMateria(const AMateria &toCopy) {
	std::cout << "Copy constructor called for AMateria!\n";
	*this = toCopy;
}

AMateria& AMateria::operator=(const AMateria& f) {
	std::cout << "Copy assignment operator called for AMateria!\n";
	this->_type = f._type;
	return (*this);
}

AMateria::~AMateria() {
	std::cout << "Destructor called for AMateria!\n";
}

AMateria::AMateria(std::string const & type) : _type(type){
	std::cout << "Type constructor called for AMateria!\n";
}
std::string	const & AMateria::getType() const{
	return (this->_type);
}
 