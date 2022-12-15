#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(){
	std::cout<< "Default constructor called" << std::endl;
	Animal::_type = "Cat";
}

Cat::Cat(std::string name){
	(void)name;
	std::cout<< "Name constructor called" << std::endl;
	Animal::_type = "Cat";
}

Cat::Cat(const Cat &Cat) : Animal(Cat){
	std::cout<< "Copy constructor called" << std::endl;
	*this = Cat;
}

Cat& Cat::operator=(const Cat& f){
	std::cout<< "Copy assignment operator called" << std::endl;
	this->_type = f._type;
	return (*this);
}

Cat::~Cat(){
	std::cout<< "Destructor called" << std::endl;
}
