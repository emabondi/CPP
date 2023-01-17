#include "Animal.hpp"
#include "Cat.hpp"

Cat::Cat(){
	std::cout<< "Cat default constructor called" << std::endl;
	Animal::_type = "Cat";
}

Cat::Cat(std::string name){
	(void)name;
	std::cout<< "Cat name constructor called" << std::endl;
	Animal::_type = "Cat";
}

Cat::Cat(const Cat &Cat) : Animal(Cat){
	std::cout<< "Cat copy constructor called" << std::endl;
	*this = Cat;
}

Cat& Cat::operator=(const Cat& f){
	std::cout<< "Cat copy assignment operator called" << std::endl;
	this->_type = f._type;
	return (*this);
}

Cat::~Cat(){
	std::cout<< "Cat destructor called" << std::endl;
}
