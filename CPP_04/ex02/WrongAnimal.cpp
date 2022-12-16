#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("Unknown"){
	std::cout<< "WrongAnimal default constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal){
	std::cout<< "WrongAnimal copy constructor" << std::endl;
	*this = WrongAnimal;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& f){
	std::cout<< "WrongAnimal copy assignment operator" << std::endl;
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

WrongAnimal::~WrongAnimal(){
	std::cout<< "WrongAnimal destructor" << std::endl;
}
