#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout<< "WrongCat default constructor called" << std::endl;
	WrongAnimal::_type = "WrongCat";
}

WrongCat::WrongCat(std::string name){
	(void)name;
	std::cout<< "WrongCat name constructor called" << std::endl;
	WrongAnimal::_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &WrongCat) : WrongAnimal(WrongCat){
	std::cout<< "Copy constructor called" << std::endl;
	*this = WrongCat;
}

WrongCat& WrongCat::operator=(const WrongCat& f){
	std::cout<< "Copy assignment operator called" << std::endl;
	this->_type = f._type;
	return (*this);
}

WrongCat::~WrongCat(){
	std::cout<< "WrongCat destructor called" << std::endl;
}