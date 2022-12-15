#include "Animal.hpp"

Animal::Animal() : _type("Unknown")
{
	std::cout<< "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type)  : _type(type)
{
	std::cout<< "Animal type constructor called" << std::endl;
	//_type = type;
}

Animal::Animal(const Animal &Animal)
{
	std::cout<< "Copy constructor called" << std::endl;
	*this = Animal;
}

Animal& Animal::operator=(const Animal& f)
{
	std::cout<< "Copy assignment operator called" << std::endl;
	this->_type = f._type;
	return (*this);
}

std::string	Animal::getType() const{
	return (this->_type);
}

void Animal::makeSound() const{
	if (_type == "Dog")
		std::cout<< "WOOF WOOF!\n";
	else if (_type == "Cat")
		std::cout<< "MIAO MIAO!\n";
}

Animal::~Animal()
{
	std::cout<< "Animal destructor called" << std::endl;
}
 