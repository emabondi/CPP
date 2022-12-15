#include "Dog.hpp"

Dog::Dog(){
	std::cout<< "Default constructor called" << std::endl;
	Animal::_type = "Dog";
}

Dog::Dog(std::string name){
	(void) name;
	std::cout<< "Name constructor called" << std::endl;
	Animal::_type = "Dog";
}

Dog::Dog(const Dog &Dog) : Animal(Dog){
	std::cout<< "Copy constructor called" << std::endl;
	*this = Dog;
}

Dog& Dog::operator=(const Dog& f){
	std::cout<< "Copy assignment operator called" << std::endl;
	this->_type = f._type;
	return (*this);
}

Dog::~Dog(){
	std::cout<< "Destructor called" << std::endl;
}
