#include "Animal.hpp"

Animal::Animal() : _type("Unknown"){
	std::cout<< "Animal default constructor" << std::endl;
}

Animal::Animal(const Animal &Animal){
	std::cout<< "Animal copy constructor called" << std::endl;
	*this = Animal;
}

Animal& Animal::operator=(const Animal& f){
	std::cout<< "Animal copy assignment operator" << std::endl;
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

Animal::~Animal(){
	std::cout<< "Animal destructor" << std::endl;
}
 