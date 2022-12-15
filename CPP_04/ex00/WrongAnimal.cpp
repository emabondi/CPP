#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Unknown")
{
	std::cout<< "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)  : _type(type)
{
	std::cout<< "WrongAnimal type constructor called" << std::endl;
	//_type = type;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal)
{
	std::cout<< "Copy constructor called" << std::endl;
	*this = WrongAnimal;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& f)
{
	std::cout<< "Copy assignment operator called" << std::endl;
	this->_type = f._type;
	return (*this);
}

std::string	WrongAnimal::getType() const{
	return (this->_type);
}

void WrongAnimal::makeSound() const{
	if (_type == "WrongCat")
		std::cout<< "OAIM OAIM!\n";
}

WrongAnimal::~WrongAnimal()
{
	std::cout<< "WrongAnimal destructor called" << std::endl;
}
