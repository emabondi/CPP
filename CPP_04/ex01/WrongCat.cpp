#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout<< "WrongCat default constructor" << std::endl;
	WrongAnimal::_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &WrongCat) : WrongAnimal(WrongCat){
	std::cout<< "WrongCat copy constructor" << std::endl;
	*this = WrongCat;
}

WrongCat& WrongCat::operator=(const WrongCat& f){
	std::cout<< "WrongCat copy assignment operator" << std::endl;
	this->_type = f._type;
	return (*this);
}

WrongCat::~WrongCat(){
	std::cout<< "WrongCat destructor" << std::endl;
}