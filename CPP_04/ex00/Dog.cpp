#include "Dog.hpp"

Dog::Dog(){
	std::cout<< "Dog default constructor called" << std::endl;
	Animal::_type = "Dog";
}

Dog::Dog(std::string name){
	(void) name;
	std::cout<< "Dog name constructor called" << std::endl;
	Animal::_type = "Dog";
}

Dog::Dog(const Dog &Dog) : Animal(Dog){
	std::cout<< "Dog copy constructor called" << std::endl;
	*this = Dog;
}

Dog& Dog::operator=(const Dog& f){
	std::cout<< "Dog copy assignment operator called" << std::endl;
	this->_type = f._type;
	return (*this);
}

Dog::~Dog(){
	std::cout<< "Dog destructor called" << std::endl;
}
